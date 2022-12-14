namespace evoker_apl
{

//devastation_apl_start
void devastation( player_t* p )
{
  action_priority_list_t* default_ = p->get_action_priority_list( "default" );
  action_priority_list_t* precombat = p->get_action_priority_list( "precombat" );

  precombat->add_action( "blessing_of_the_bronze" );

  default_->add_action( "quell" );
  default_->add_action( "unravel" );  
  default_->add_action( "pyre,if=!buff.charged_blast.stack=20" );
  default_->add_action( "fire_breath,empower_to=1" );
  default_->add_action( "trinket#1" );
  default_->add_action( "shattering_star" );
  default_->add_action( "eternity_surge,empower_to=1" );
  default_->add_action( "living_flame,if=!buff.burnout.up" );
  default_->add_action( "disintegrate,!cooldown.shattering_star.remains>6|essence>essence.max-1|buff.essence_burst.stack==buff.essence_burst.max_stack)" );
  default_->add_action( "firestorm,if=!buff.snapfire.up" );
  default_->add_action( "deep_breath" );
  default_->add_action( "living_flame,if=buff.burnout.up&buff.essence_burst.stack<buff.essence_burst.max_stack&essence<essence.max-1" );
  default_->add_action( "azure_strike,if=talent.shattering_star&cooldown.shattering_star.remains<=(buff.essence_burst.max_stack-buff.essence_burst.stack)*gcd.max))" );
  default_->add_action( "oppressing_roar" );
  default_->add_action( "landslide" );
  default_->add_action( "azure_strike,if=buff.essence_burst.max_stack-buff.essence_burst.stack" );
  default_->add_action( "azure_strike,if=cooldown.fire_breath.remains<6*gcd.max&cooldown.eternity_surge.remains<6*gcd.max" );

}
//devastation_apl_end

void preservation( player_t* /*p*/ )
{
}

void no_spec( player_t* /*p*/ )
{
}

}  // namespace evoker_apl
