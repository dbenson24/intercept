// ptr: __sqf::binary__action__object__array__ret__nothing
nothing action(object unit_, array action_);

// ptr: __sqf::binary__addaction__object__array__ret__nothing_scalar
nothing_scalar add_action(object unit_, array _action__script_filename_or_code___arguments__priority__show_window__hide_on_use__shortcut__condition___);

// ptr: __sqf::binary__addbackpackcargo__object__array__ret__nothing
nothing add_backpack_cargo(object unit_, array backpacks_);

// ptr: __sqf::binary__addbackpackcargoglobal__object__array__ret__nothing
nothing add_backpack_cargo_global(object unit_, array backpacks_);

// ptr: __sqf::binary__addcuratoraddons__object__array__ret__nothing
nothing add_curator_addons(object curator_obj_, array _addons__);

// ptr: __sqf::binary__addcuratorcameraarea__object__array__ret__nothing
nothing add_curator_camera_area(object curator_obj_, array _camera_area_id___position__radius__);

// ptr: __sqf::binary__addcuratoreditableobjects__object__array__ret__nothing
nothing add_curator_editable_objects(object curator_obj_, array __objects__add_crew___true__);

// ptr: __sqf::binary__addcuratoreditingarea__object__array__ret__nothing
nothing add_curator_editing_area(object curator_obj_, array _edit_area_id___position___radius__);

// ptr: __sqf::binary__addeditorobject__control__array__ret__string
string add_editor_object(control map_, array _type___name_1__value_1________subtype_class__);

// ptr: __sqf::binary__addeventhandler__object__array__ret__nothing_scalar
nothing_scalar add_event_handler(object object_, array handler_);

// ptr: __sqf::binary__addgroupicon__group__array__ret__scalar
scalar add_group_icon(group group_, array properties_);

// ptr: __sqf::binary__additemcargo__object__array__ret__nothing
nothing add_item_cargo(object unit_, array _item__count__);

// ptr: __sqf::binary__additemcargoglobal__object__array__ret__nothing
nothing add_item_cargo_global(object unit_, array _item__count__);

// ptr: __sqf::binary__addmagazine__object__array__ret__nothing
nothing add_magazine(object unit_, array _magazine_name__ammo_count__);

// ptr: __sqf::binary__addmagazineammocargo__object__array__ret__nothing
nothing add_magazine_ammo_cargo(object unit_, array magazines_);

// ptr: __sqf::binary__addmagazinecargo__object__array__ret__nothing
nothing add_magazine_cargo(object unit_, array magazines_);

// ptr: __sqf::binary__addmagazinecargoglobal__object__array__ret__nothing
nothing add_magazine_cargo_global(object unit_, array magazines_);

// ptr: __sqf::binary__addmagazines__object__array__ret__nothing
nothing add_magazines(object unit_, array _magazine_name__count__);

// ptr: __sqf::binary__addmagazineturret__object__array__ret__nothing
nothing add_magazine_turret(object transport_, array _weapon_name__turret_path__);

// ptr: __sqf::binary__addmenu__control__array__ret__scalar
scalar add_menu(control map_, array _text_priority__);

// ptr: __sqf::binary__addmenuitem__control__array__ret__scalar
scalar add_menu_item(control map_, array _menu_or_index_text_command_priority__);

// ptr: __sqf::binary__addmpeventhandler__object__array__ret__nothing_scalar
nothing_scalar add_mpevent_handler(object object_, array handler_);

// ptr: __sqf::binary__addpublicvariableeventhandler__string__array__ret__nothing
nothing add_public_variable_event_handler(std::string name_, array _target__code__);

// ptr: __sqf::binary__addresources__team_member__array__ret__nothing
nothing add_resources(team_member team_member_, array _resource_1__resource_2_______);

// ptr: __sqf::binary__addwaypoint__group__array__ret__array
array add_waypoint(group group_, array _center__radius__or__center__radius__index__or__center__radius__index__name__);

// ptr: __sqf::binary__addweaponcargo__object__array__ret__nothing
nothing add_weapon_cargo(object unit_, array weapons_);

// ptr: __sqf::binary__addweaponcargoglobal__object__array__ret__nothing
nothing add_weapon_cargo_global(object unit_, array weapons_);

// ptr: __sqf::binary__addweaponitem__object__array__ret__nothing
nothing add_weapon_item(object unit_, array _weapon_item__);

// ptr: __sqf::binary__addweaponturret__object__array__ret__nothing
nothing add_weapon_turret(object vehicle_, array _weapon_name_turret_array__);

// ptr: __sqf::binary__aimedattarget__object__array__ret__scalar
scalar aimed_at_target(object vehicle_, array _target__weapon__);

// ptr: __sqf::binary__allowfleeing__object_group__scalar__ret__nothing
nothing allow_fleeing(group unit_, float courage_);

// ptr: __sqf::binary__allowfleeing__object_group__scalar__ret__nothing
nothing allow_fleeing(object unit_, float courage_);

// ptr: __sqf::binary__allowgetin__array__bool__ret__nothing
nothing allow_get_in(array unit_array_, bool allow_);

// ptr: __sqf::binary__animate__object__array__ret__nothing
nothing animate(object object_, array _animation__phase__instant___false__);

// ptr: __sqf::binary__animatedoor__object__array__ret__nothing
nothing animate_door(object object_, array _doorname__phase__now__);

// ptr: __sqf::binary__append__array__array__ret__nothing
nothing append(array array_a_, array array_b_);

// ptr: __sqf::binary__arrayintersect__array__array__ret__array
array array_intersect(array array_, array array_);

// ptr: __sqf::binary__assignascargoindex__object__array__ret__nothing
nothing assign_as_cargo_index(object soldier_, array _vehicle__index__);

// ptr: __sqf::binary__assignasturret__object__array__ret__nothing
nothing assign_as_turret(object unit_, array _vehicle___turret_path___);

// ptr: __sqf::binary__attachto__object__array__ret__nothing
nothing attach_to(object obj_, array _obj_offset_mem_point__);

// ptr: __sqf::binary__backpackspacefor__object__string__ret__array
array backpack_space_for(object backpack_, std::string weapon_or_magazine_type_);

// ptr: __sqf::binary__buildingexit__object__scalar__ret__array
array building_exit(object building_, float index_);

// ptr: __sqf::binary__buildingpos__object__scalar__ret__array
array building_pos(object building_, float index_);

// ptr: __sqf::binary__camconstuctionsetparams__object__array__ret__nothing
nothing cam_constuction_set_params(object camera_, array __x_y_z__radius__max_above_land__);

// ptr: __sqf::binary__camcreate__string__array__ret__object
object cam_create(std::string type_, array position_);

// ptr: __sqf::binary__cameraeffect__object__array__ret__nothing
nothing camera_effect(object camera_, array effect_);

// ptr: __sqf::binary__campreparefocus__object__array__ret__nothing
nothing cam_prepare_focus(object camera_, array focus_range_);

// ptr: __sqf::binary__campreparefovrange__object__array__ret__nothing
nothing cam_prepare_fov_range(object camera_, array fov_range_);

// ptr: __sqf::binary__campreparepos__object__array__ret__nothing
nothing cam_prepare_pos(object camera_, array position_);

// ptr: __sqf::binary__campreparerelpos__object__array__ret__nothing
nothing cam_prepare_rel_pos(object camera_, array position_);

// ptr: __sqf::binary__campreparetarget__object__array__ret__nothing
nothing cam_prepare_target(object camera_, array position_);

// ptr: __sqf::binary__camsetdir__object__array__ret__nothing
nothing cam_set_dir(object camera_, array direction_);

// ptr: __sqf::binary__camsetfocus__object__array__ret__nothing
nothing cam_set_focus(object camera_, array focus_range_);

// ptr: __sqf::binary__camsetfovrange__object__array__ret__nothing
nothing cam_set_fov_range(object camera_, array fov_range_);

// ptr: __sqf::binary__camsetpos__object__array__ret__nothing
nothing cam_set_pos(object camera_, array position_);

// ptr: __sqf::binary__camsetrelpos__object__array__ret__nothing
nothing cam_set_rel_pos(object camera_, array position_);

// ptr: __sqf::binary__camsettarget__object__array__ret__nothing
nothing cam_set_target(object camera_, array position_);

// ptr: __sqf::binary__checkvisibility__array__array__ret__scalar
scalar check_visibility(array _ignored_object__lod_name__, array _begin__end__);

// ptr: __sqf::binary__commandartilleryfire__object_array__array__ret__nothing
nothing command_artillery_fire(array unit_, array _position__type__rounds__);

// ptr: __sqf::binary__commandartilleryfire__object_array__array__ret__nothing
nothing command_artillery_fire(object unit_, array _position__type__rounds__);

// ptr: __sqf::binary__commandchat__object_array__string__ret__nothing
nothing command_chat(array unit_, std::string chat_text_);

// ptr: __sqf::binary__commandchat__object_array__string__ret__nothing
nothing command_chat(object unit_, std::string chat_text_);

// ptr: __sqf::binary__commandfire__object_array__object__ret__nothing
nothing command_fire(array unit_, object target_);

// ptr: __sqf::binary__commandfire__object_array__object__ret__nothing
nothing command_fire(object unit_, object target_);

// ptr: __sqf::binary__commandfollow__object_array__object__ret__nothing
nothing command_follow(array unit_, object formation_leader_);

// ptr: __sqf::binary__commandfollow__object_array__object__ret__nothing
nothing command_follow(object unit_, object formation_leader_);

// ptr: __sqf::binary__commandfsm__object_array__array__ret__nothing
nothing command_fsm(array unit_s__, array _fsm_name__position__target__);

// ptr: __sqf::binary__commandfsm__object_array__array__ret__nothing
nothing command_fsm(object unit_s__, array _fsm_name__position__target__);

// ptr: __sqf::binary__commandmove__object_array__array__ret__nothing
nothing command_move(array unit_, array position_);

// ptr: __sqf::binary__commandmove__object_array__array__ret__nothing
nothing command_move(object unit_, array position_);

// ptr: __sqf::binary__commandradio__object_array__string__ret__nothing
nothing command_radio(array unit_, std::string radio_name_);

// ptr: __sqf::binary__commandradio__object_array__string__ret__nothing
nothing command_radio(object unit_, std::string radio_name_);

// ptr: __sqf::binary__commandtarget__object_array__object__ret__nothing
nothing command_target(array unit_, object position_);

// ptr: __sqf::binary__commandtarget__object_array__object__ret__nothing
nothing command_target(object unit_, object position_);

// ptr: __sqf::binary__commandwatch__object_array__array__ret__nothing
nothing command_watch(array unit_, array position_);

// ptr: __sqf::binary__commandwatch__object_array__array__ret__nothing
nothing command_watch(object unit_, array position_);

// ptr: __sqf::binary__commandwatch__object_array__object__ret__nothing
nothing command_watch(array unit_, object target_);

// ptr: __sqf::binary__commandwatch__object_array__object__ret__nothing
nothing command_watch(object unit_, object target_);

// ptr: __sqf::binary__configclasses__string__config__ret__array
array config_classes(std::string condition_, config config_);

// ptr: __sqf::binary__count__code__array__ret__scalar
scalar count(code condition_, array array_);

// ptr: __sqf::binary__countenemy__object__array__ret__scalar
scalar count_enemy(object unit_, array array_);

// ptr: __sqf::binary__countfriendly__object__array__ret__scalar
scalar count_friendly(object unit_, array array_);

// ptr: __sqf::binary__countside__side__array__ret__scalar
scalar count_side(side side_, array array_);

// ptr: __sqf::binary__counttype__string__array__ret__scalar
scalar count_type(std::string type_name_, array array_);

// ptr: __sqf::binary__countunknown__object__array__ret__scalar
scalar count_unknown(object unit_, array array_);

// ptr: __sqf::binary__create3denentity__group__array__ret__any
any create_3denentity(group _group__, array __mode____class_name____position___);

// ptr: __sqf::binary__creatediaryrecord__object__array__ret__diary_record
diary_record create_diary_record(object person_, array _subject__text___task___state____or__subject___title__text____task___state____);

// ptr: __sqf::binary__creatediarysubject__object__array__ret__scalar
scalar create_diary_subject(object person_, array _subject__display_name__or__subject__display_name__picture__);

// ptr: __sqf::binary__createmissiondisplay__display__array__ret__display
display create_mission_display(display parent_, array _root__missions_space__);

// ptr: __sqf::binary__createsimpletask__object__array__ret__task
task create_simple_task(object person_, array _name__or__name__parent_task__);

// ptr: __sqf::binary__createsite__string__array__ret__object
object create_site(std::string type_, array pos_);

// ptr: __sqf::binary__createtask__team_member__array__ret__task
task create_task(team_member team_member_, array __type__or__type__parent_task___priority__name_1__value_1__name_2__value_2_______);

// ptr: __sqf::binary__createunit__string__array__ret__nothing
nothing create_unit(std::string type_, array unit_info_);

// ptr: __sqf::binary__createunit__group__array__ret__object
object create_unit(group group_, array _type__position__markers__placement__special__);

// ptr: __sqf::binary__createvehicle__string__array__ret__object
object create_vehicle(std::string type_, array pos_);

// ptr: __sqf::binary__createvehiclelocal__string__array__ret__object
object create_vehicle_local(std::string type_, array pos_);

// ptr: __sqf::binary__ctrladdeventhandler__control__array__ret__scalar
scalar ctrl_add_event_handler(control control_, array _handler_name__function__);

// ptr: __sqf::binary__ctrlcreate__display__array__ret__control
control ctrl_create(display parent_display_, array _base_class__idc__group_control__);

// ptr: __sqf::binary__ctrlmapanimadd__control__array__ret__nothing
nothing ctrl_map_anim_add(control map_, array frame_);

// ptr: __sqf::binary__ctrlmapcursor__control__array__ret__nothing
nothing ctrl_map_cursor(control control_, array texture_names_);

// ptr: __sqf::binary__ctrlmapscreentoworld__control__array__ret__array
array ctrl_map_screen_to_world(control map_, array _x__y__);

// ptr: __sqf::binary__ctrlmapworldtoscreen__control__array__ret__array
array ctrl_map_world_to_screen(control map_, array position_);

// ptr: __sqf::binary__ctrlremoveeventhandler__control__array__ret__nothing
nothing ctrl_remove_event_handler(control control_, array _handler_name__id__);

// ptr: __sqf::binary__ctrlsetactivecolor__control__array__ret__nothing
nothing ctrl_set_active_color(control display_, array color_);

// ptr: __sqf::binary__ctrlsetangle__control__array__ret__nothing
nothing ctrl_set_angle(control control_, array _angle__x_center__y_center__);

// ptr: __sqf::binary__ctrlsetbackgroundcolor__control__array__ret__nothing
nothing ctrl_set_background_color(control display_, array color_);

// ptr: __sqf::binary__ctrlseteventhandler__control__array__ret__nothing
nothing ctrl_set_event_handler(control control_, array _handler_name__function__);

// ptr: __sqf::binary__ctrlsetforegroundcolor__control__array__ret__nothing
nothing ctrl_set_foreground_color(control display_, array color_);

// ptr: __sqf::binary__ctrlsetmodeldirandup__control__array__ret__nothing
nothing ctrl_set_model_dir_and_up(control ctrl_, array _direction__up__);

// ptr: __sqf::binary__ctrlsetposition__control__array__ret__nothing
nothing ctrl_set_position(control control_, array _x__y__w__h__);

// ptr: __sqf::binary__ctrlsettextcolor__control__array__ret__nothing
nothing ctrl_set_text_color(control display_, array color_);

// ptr: __sqf::binary__ctrlsettextcolorsecondary__control__array__ret__nothing
nothing ctrl_set_text_color_secondary(control display_, array color_);

// ptr: __sqf::binary__ctrlsettooltipcolorbox__control__array__ret__nothing
nothing ctrl_set_tooltip_color_box(control display_, array color_);

// ptr: __sqf::binary__ctrlsettooltipcolorshade__control__array__ret__nothing
nothing ctrl_set_tooltip_color_shade(control display_, array color_);

// ptr: __sqf::binary__ctrlsettooltipcolortext__control__array__ret__nothing
nothing ctrl_set_tooltip_color_text(control display_, array color_);

// ptr: __sqf::binary__currentmagazinedetailturret__object__array__ret__string
string current_magazine_detail_turret(object vehicle_, array turret_path_);

// ptr: __sqf::binary__currentmagazineturret__object__array__ret__string
string current_magazine_turret(object vehicle_, array turret_path_);

// ptr: __sqf::binary__currentweaponturret__object__array__ret__string
string current_weapon_turret(object vehicle_, array turret_path_);

// ptr: __sqf::binary__customchat__object__array__ret__nothing
nothing custom_chat(object unit_, array _chan_ix__string__);

// ptr: __sqf::binary__customradio__object__array__ret__nothing
nothing custom_radio(object unit_, array _chan_ix__string__);

// ptr: __sqf::binary__cutobj__scalar__array__ret__nothing
nothing cut_obj(float layer_, array effect_);

// ptr: __sqf::binary__cutrsc__scalar__array__ret__nothing
nothing cut_rsc(float layer_, array effect_);

// ptr: __sqf::binary__cuttext__scalar__array__ret__nothing
nothing cut_text(float layer_, array effect_);

// ptr: __sqf::binary__deleteat__array__scalar__ret__any
any delete_at(array array_, float index_);

// ptr: __sqf::binary__deleterange__array__array__ret__nothing
nothing delete_range(array array_, array _index_count__);

// ptr: __sqf::binary__deleteresources__team_member__array__ret__nothing
nothing delete_resources(team_member team_member_, array _resource_1__resource_2_______);

// ptr: __sqf::binary__disableuavconnectability__object__array__ret__nothing
nothing disable_uavconnectability(object object_, array _uav__check_all_items__);

// ptr: __sqf::binary__displayaddeventhandler__display__array__ret__scalar
scalar display_add_event_handler(display display_, array _handler_name__function__);

// ptr: __sqf::binary__displayremoveeventhandler__display__array__ret__nothing
nothing display_remove_event_handler(display display_, array _handler_name__id__);

// ptr: __sqf::binary__displayseteventhandler__display__array__ret__nothing
nothing display_set_event_handler(display display_, array _handler_name__function__);

// ptr: __sqf::binary__distance__object_array__object_array__ret__scalar
scalar distance(array obj_1_or_pos_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__distance__object_array__object_array__ret__scalar
scalar distance(array obj_1_or_pos_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__distance__object_array__object_array__ret__scalar
scalar distance(object obj_1_or_pos_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__distance__object_array__object_array__ret__scalar
scalar distance(object obj_1_or_pos_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__distance__location__array__ret__scalar
scalar distance(location location_1_, array pos_2_);

// ptr: __sqf::binary__distance__array__location__ret__scalar
scalar distance(array pos_1_, location location_2_);

// ptr: __sqf::binary__distance2d__object_array__object_array__ret__scalar
scalar distance_2d(array obj_1_or_pos_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__distance2d__object_array__object_array__ret__scalar
scalar distance_2d(array obj_1_or_pos_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__distance2d__object_array__object_array__ret__scalar
scalar distance_2d(object obj_1_or_pos_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__distance2d__object_array__object_array__ret__scalar
scalar distance_2d(object obj_1_or_pos_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__distancesqr__object_array__object_array__ret__scalar
scalar distance_sqr(array obj_1_or_pos_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__distancesqr__object_array__object_array__ret__scalar
scalar distance_sqr(array obj_1_or_pos_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__distancesqr__object_array__object_array__ret__scalar
scalar distance_sqr(object obj_1_or_pos_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__distancesqr__object_array__object_array__ret__scalar
scalar distance_sqr(object obj_1_or_pos_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__distancesqr__location__array__ret__scalar
scalar distance_sqr(location location_1_, array pos_2_);

// ptr: __sqf::binary__distancesqr__array__location__ret__scalar
scalar distance_sqr(array pos_1_, location location_2_);

// ptr: __sqf::binary__doartilleryfire__object_array__array__ret__nothing
nothing do_artillery_fire(array unit_, array _position__type__rounds__);

// ptr: __sqf::binary__doartilleryfire__object_array__array__ret__nothing
nothing do_artillery_fire(object unit_, array _position__type__rounds__);

// ptr: __sqf::binary__dofire__object_array__object__ret__nothing
nothing do_fire(array unit_, object target_);

// ptr: __sqf::binary__dofire__object_array__object__ret__nothing
nothing do_fire(object unit_, object target_);

// ptr: __sqf::binary__dofollow__object_array__object__ret__nothing
nothing do_follow(array unit_, object position_);

// ptr: __sqf::binary__dofollow__object_array__object__ret__nothing
nothing do_follow(object unit_, object position_);

// ptr: __sqf::binary__dofsm__object_array__array__ret__nothing
nothing do_fsm(array unit_s__, array _fsm_name__position__target__);

// ptr: __sqf::binary__dofsm__object_array__array__ret__nothing
nothing do_fsm(object unit_s__, array _fsm_name__position__target__);

// ptr: __sqf::binary__domove__object_array__array__ret__nothing
nothing do_move(array unit_, array position_);

// ptr: __sqf::binary__domove__object_array__array__ret__nothing
nothing do_move(object unit_, array position_);

// ptr: __sqf::binary__dotarget__object_array__object__ret__nothing
nothing do_target(array unit_, object position_);

// ptr: __sqf::binary__dotarget__object_array__object__ret__nothing
nothing do_target(object unit_, object position_);

// ptr: __sqf::binary__dowatch__object_array__array__ret__nothing
nothing do_watch(array unit_, array position_);

// ptr: __sqf::binary__dowatch__object_array__array__ret__nothing
nothing do_watch(object unit_, array position_);

// ptr: __sqf::binary__dowatch__object_array__object__ret__nothing
nothing do_watch(array unit_, object target_);

// ptr: __sqf::binary__dowatch__object_array__object__ret__nothing
nothing do_watch(object unit_, object target_);

// ptr: __sqf::binary__drawarrow__control__array__ret__nothing
nothing draw_arrow(control map_, array _position_1__position_2__color__);

// ptr: __sqf::binary__drawellipse__control__array__ret__nothing
nothing draw_ellipse(control map_, array _center__a__b__angle__color__fill__);

// ptr: __sqf::binary__drawicon__control__array__ret__nothing
nothing draw_icon(control map_, array _texture__color__position__width__height__angle__text__shadow__text_size__font__align__);

// ptr: __sqf::binary__drawline__control__array__ret__nothing
nothing draw_line(control map_, array _position_1__position_2__color__);

// ptr: __sqf::binary__drawlink__control__array__ret__nothing
nothing draw_link(control map_, array _from__to__param_type__line_type__color__);

// ptr: __sqf::binary__drawrectangle__control__array__ret__nothing
nothing draw_rectangle(control map_, array _center__a__b__angle__color__fill__);

// ptr: __sqf::binary__editorseteventhandler__control__array__ret__nothing
nothing editor_set_event_handler(control map_, array _handler_name__function__);

// ptr: __sqf::binary__else__code__code__ret__array
array else(code if_code_, code else_code_);

// ptr: __sqf::binary__enableattack__object_group__bool__ret__nothing
nothing enable_attack(group group_, bool enable_);

// ptr: __sqf::binary__enableattack__object_group__bool__ret__nothing
nothing enable_attack(object group_, bool enable_);

// ptr: __sqf::binary__enablegunlights__object_group__string__ret__nothing
nothing enable_gun_lights(group group_, std::string mode_);

// ptr: __sqf::binary__enablegunlights__object_group__string__ret__nothing
nothing enable_gun_lights(object group_, std::string mode_);

// ptr: __sqf::binary__enableirlasers__object_group__bool__ret__nothing
nothing enable_irlasers(group group_, bool enable_);

// ptr: __sqf::binary__enableirlasers__object_group__bool__ret__nothing
nothing enable_irlasers(object group_, bool enable_);

// ptr: __sqf::binary__enablepersonturret__object__array__ret__nothing
nothing enable_person_turret(object vehicle_, array _turret_path__enable__);

// ptr: __sqf::binary__enableuavconnectability__object__array__ret__nothing
nothing enable_uavconnectability(object object_, array _uav__check_all_items__);

// ptr: __sqf::binary__evalobjectargument__control__array__ret__any
any eval_object_argument(control map_, array _object__argument__);

// ptr: __sqf::binary__execeditorscript__control__array__ret__any
any exec_editor_script(control map_, array _object__script__);

// ptr: __sqf::binary__find__array__any__ret__scalar
scalar find(array array_, any x_);

// ptr: __sqf::binary__findcover__object__array__ret__object
object find_cover(object object_, array _position__hide_position__max_dist__min_dist__visibility_position__ignore_object__);

// ptr: __sqf::binary__findeditorobject__control__array__ret__string
string find_editor_object(control map_, array _type__name_1__value_1_______);

// ptr: __sqf::binary__findemptyposition__array__array__ret__array
array find_empty_position(array center_, array _radius__max_distance__or__radius__max_distance__vehicle_type__);

// ptr: __sqf::binary__findemptypositionready__array__array__ret__array
array find_empty_position_ready(array center_, array _radius__max_distance__);

// ptr: __sqf::binary__findnearestenemy__object__object_array__ret__object
object find_nearest_enemy(object object_, array position_);

// ptr: __sqf::binary__findnearestenemy__object__object_array__ret__object
object find_nearest_enemy(object object_, object position_);

// ptr: __sqf::binary__fire__object__array__ret__nothing
nothing fire(object unit_, array array_);

// ptr: __sqf::binary__fireattarget__object__array__ret__bool
bool fire_at_target(object vehicle_, array _target__weapon__);

// ptr: __sqf::binary__forceweaponfire__object__array__ret__nothing
nothing force_weapon_fire(object unit_, array _weapon__mode__);

// ptr: __sqf::binary__foreach__code__array__ret__nothing
nothing for_each(code command_, array array_);

// ptr: __sqf::binary__get3denattribute__object__string__ret__array
array get_3denattribute(object editor_object_, std::string attribute_type_);

// ptr: __sqf::binary__get3denattribute__group__string__ret__array
array get_3denattribute(group editor_group_, std::string attribute_type_);

// ptr: __sqf::binary__get3denattribute__array__string__ret__array
array get_3denattribute(array editor_waypoint_, std::string attribute_type_);

// ptr: __sqf::binary__get3denattribute__string__string__ret__array
array get_3denattribute(std::string editor_marker_, std::string attribute_type_);

// ptr: __sqf::binary__getartilleryeta__object__array__ret__scalar
scalar get_artillery_eta(object unit_, array _position__magazine_type__);

// ptr: __sqf::binary__getdir__object_array__object_array__ret__scalar
scalar get_dir(array obj_1_or_pos_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__getdir__object_array__object_array__ret__scalar
scalar get_dir(array obj_1_or_pos_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__getdir__object_array__object_array__ret__scalar
scalar get_dir(object obj_1_or_pos_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__getdir__object_array__object_array__ret__scalar
scalar get_dir(object obj_1_or_pos_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__getgroupicon__group__scalar__ret__array
array get_group_icon(group group_, float id_);

// ptr: __sqf::binary__gethidefrom__object__object__ret__array
array get_hide_from(object object_, object enemy_);

// ptr: __sqf::binary__getobjectargument__control__array__ret__string
string get_object_argument(control map_, array _object__argument__);

// ptr: __sqf::binary__getobjectchildren__control__string__ret__array
array get_object_children(control map_, std::string object_);

// ptr: __sqf::binary__getpos__object_array__array__ret__array
array get_pos(array obj_or_pos_, array _dist__azimuth__);

// ptr: __sqf::binary__getpos__object_array__array__ret__array
array get_pos(object obj_or_pos_, array _dist__azimuth__);

// ptr: __sqf::binary__getreldir__object__object_array__ret__scalar
scalar get_rel_dir(object obj_1_, array obj_2_or_pos_2_);

// ptr: __sqf::binary__getreldir__object__object_array__ret__scalar
scalar get_rel_dir(object obj_1_, object obj_2_or_pos_2_);

// ptr: __sqf::binary__getrelpos__object__array__ret__array
array get_rel_pos(object obj_, array _dist__reldir__);

// ptr: __sqf::binary__getvariable__namespace__array__ret__any
any get_variable(namespace namespace_, array _name__default_value__);

// ptr: __sqf::binary__getvariable__display__string_array__ret__any
any get_variable(display object_, array name_or__name__default_value__);

// ptr: __sqf::binary__getvariable__display__string_array__ret__any
any get_variable(display object_, std::string name_or__name__default_value__);

// ptr: __sqf::binary__getvariable__control__string_array__ret__any
any get_variable(control control_, array name_or__name__default_value__);

// ptr: __sqf::binary__getvariable__control__string_array__ret__any
any get_variable(control control_, std::string name_or__name__default_value__);

// ptr: __sqf::binary__getvariable__object__array__ret__any
any get_variable(object object_, array _name__default_value__);

// ptr: __sqf::binary__getvariable__group__array__ret__any
any get_variable(group group_, array _name__dafault_value__);

// ptr: __sqf::binary__getvariable__team_member__array__ret__any
any get_variable(team_member team_member_, array _name__default_value__);

// ptr: __sqf::binary__glanceat__object_array__object_array__ret__nothing
nothing glance_at(array unit_s__, array position_);

// ptr: __sqf::binary__glanceat__object_array__object_array__ret__nothing
nothing glance_at(array unit_s__, object position_);

// ptr: __sqf::binary__glanceat__object_array__object_array__ret__nothing
nothing glance_at(object unit_s__, array position_);

// ptr: __sqf::binary__glanceat__object_array__object_array__ret__nothing
nothing glance_at(object unit_s__, object position_);

// ptr: __sqf::binary__groupselectunit__object__array__ret__nothing
nothing group_select_unit(object unit_, array _unit_bool__);

// ptr: __sqf::binary__hcgroupparams__object__group__ret__array
array hc_group_params(object unit_, group group_);

// ptr: __sqf::binary__hcselectgroup__object__array__ret__nothing
nothing hc_select_group(object unit_, array array_);

// ptr: __sqf::binary__hcsetgroup__object__array__ret__nothing
nothing hc_set_group(object unit_, array array_);

// ptr: __sqf::binary__hintc__string__array__ret__nothing
nothing hint_c(std::string title_, array _text_1__text_2_______);

// ptr: __sqf::binary__in__any__array__ret__bool
bool in(any x_, array array_);

// ptr: __sqf::binary__in__array__location__ret__bool
bool in(array position_, location location_);

// ptr: __sqf::binary__inpolygon__array__array__ret__bool
bool in_polygon(array position_, array __polygon_vectors___);

// ptr: __sqf::binary__inrangeofartillery__array__array__ret__bool
bool in_range_of_artillery(array pos_, array __unit_1__unit_2________magazine_type__);

// ptr: __sqf::binary__inserteditorobject__control__array__ret__string
string insert_editor_object(control map_, array _type__value___name_1__value_1________subtype_class__);

// ptr: __sqf::binary__intersect__array__array__ret__array
array intersect(array _object__lod_name__, array _begin__end__);

// ptr: __sqf::binary__isequaltypeall__array__any__ret__bool
bool is_equal_type_all(array array_, any anything_);

// ptr: __sqf::binary__isequaltypeany__any__array__ret__bool
bool is_equal_type_any(any anything_, array array_);

// ptr: __sqf::binary__isequaltypearray__array__array__ret__bool
bool is_equal_type_array(array array_, array array_);

// ptr: __sqf::binary__isequaltypeparams__any__array__ret__bool
bool is_equal_type_params(any array_, array array_);

// ptr: __sqf::binary__isflatempty__array__array__ret__array
array is_flat_empty(array position_, array _float_min_distance_float_precize_pos_float_max_gradient_float_gradient_radius_float_on_water_bool_on_shore_object_skipobj__);

// ptr: __sqf::binary__iskindof__string__array__ret__bool
bool is_kind_of(std::string type_name_1_, array _type_name_2__config__);

// ptr: __sqf::binary__isuavconnectable__object__array__ret__bool
bool is_uavconnectable(object object_, array _uav__check_all_items__);

// ptr: __sqf::binary__join__array__object_group__ret__nothing
nothing join(array unit_array_, group group_);

// ptr: __sqf::binary__join__array__object_group__ret__nothing
nothing join(array unit_array_, object group_);

// ptr: __sqf::binary__joinas__object__array__ret__nothing
nothing join_as(object unit_, array _group__id__);

// ptr: __sqf::binary__joinassilent__object__array__ret__nothing
nothing join_as_silent(object unit_, array _group__id__);

// ptr: __sqf::binary__joinsilent__array__object_group__ret__nothing
nothing join_silent(array unit_array_, group group_);

// ptr: __sqf::binary__joinsilent__array__object_group__ret__nothing
nothing join_silent(array unit_array_, object group_);

// ptr: __sqf::binary__joinstring__array__string__ret__string
string join_string(array array_, std::string string_);

// ptr: __sqf::binary__kbaddtopic__object__array__ret__nothing
nothing kb_add_topic(object person_, array _name__filename___task_type___player_event_handler____);

// ptr: __sqf::binary__kbreact__object__array__ret__nothing
nothing kb_react(object person_, array _receiver__topic__sentence_id___argument_name__argument_value__argument_text__argument_speech________);

// ptr: __sqf::binary__kbtell__object__array__ret__nothing
nothing kb_tell(object person_, array _receiver__topic__sentence_id___argument_name__argument_value__argument_text__argument_speech________);

// ptr: __sqf::binary__kbwassaid__object__array__ret__bool
bool kb_was_said(object person_, array _receiver__topic__sentence_id__max__age__);

// ptr: __sqf::binary__knowsabout__object_group__object__ret__scalar
scalar knows_about(group unit_, object target_);

// ptr: __sqf::binary__knowsabout__object_group__object__ret__scalar
scalar knows_about(object unit_, object target_);

// ptr: __sqf::binary__lbcolor__control__scalar__ret__array
array lb_color(control control_, float index_);

// ptr: __sqf::binary__lbcolorright__control__scalar__ret__array
array lb_color_right(control control_, float index_);

// ptr: __sqf::binary__lbsetcolor__control__array__ret__nothing
nothing lb_set_color(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetcolorright__control__array__ret__nothing
nothing lb_set_color_right(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetdata__control__array__ret__nothing
nothing lb_set_data(control control_, array _index__data__);

// ptr: __sqf::binary__lbsetpicture__control__array__ret__nothing
nothing lb_set_picture(control control_, array _index__name__);

// ptr: __sqf::binary__lbsetpicturecolor__control__array__ret__nothing
nothing lb_set_picture_color(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetpicturecolordisabled__control__array__ret__nothing
nothing lb_set_picture_color_disabled(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetpicturecolorselected__control__array__ret__nothing
nothing lb_set_picture_color_selected(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetpictureright__control__array__ret__nothing
nothing lb_set_picture_right(control control_, array _index__name__);

// ptr: __sqf::binary__lbsetpicturerightcolor__control__array__ret__nothing
nothing lb_set_picture_right_color(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetpicturerightcolordisabled__control__array__ret__nothing
nothing lb_set_picture_right_color_disabled(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetpicturerightcolorselected__control__array__ret__nothing
nothing lb_set_picture_right_color_selected(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetselectcolor__control__array__ret__nothing
nothing lb_set_select_color(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetselectcolorright__control__array__ret__nothing
nothing lb_set_select_color_right(control control_, array _index__color__);

// ptr: __sqf::binary__lbsetselected__control__array__ret__nothing
nothing lb_set_selected(control control_, array _index__selected__);

// ptr: __sqf::binary__lbsettextright__control__array__ret__nothing
nothing lb_set_text_right(control control_, array _index__text__);

// ptr: __sqf::binary__lbsettooltip__control__array__ret__nothing
nothing lb_set_tooltip(control control_, array _index__tooltip__);

// ptr: __sqf::binary__lbsetvalue__control__array__ret__nothing
nothing lb_set_value(control control_, array _index__value__);

// ptr: __sqf::binary__lightattachobject__object__array__ret__nothing
nothing light_attach_object(object light_, array _object__position__);

// ptr: __sqf::binary__listobjects__control__string__ret__array
array list_objects(control map_, std::string type_);

// ptr: __sqf::binary__lnbaddrow__control__array__ret__scalar
scalar lnb_add_row(control control_, array _text_1_text_2______);

// ptr: __sqf::binary__lnbcolor__control__array__ret__array
array lnb_color(control control_, array _row__column__);

// ptr: __sqf::binary__lnbcolorright__control__array__ret__array
array lnb_color_right(control control_, array _row__column__);

// ptr: __sqf::binary__lnbdata__control__array__ret__string
string lnb_data(control control_, array _row__column__);

// ptr: __sqf::binary__lnbpicture__control__array__ret__string
string lnb_picture(control control_, array _row__column__);

// ptr: __sqf::binary__lnbpictureright__control__array__ret__string
string lnb_picture_right(control control_, array _row__column__);

// ptr: __sqf::binary__lnbsetcolor__control__array__ret__nothing
nothing lnb_set_color(control control_, array __row__column___color__);

// ptr: __sqf::binary__lnbsetcolorright__control__array__ret__nothing
nothing lnb_set_color_right(control control_, array __row__column___color__);

// ptr: __sqf::binary__lnbsetcolumnspos__control__array__ret__nothing
nothing lnb_set_columns_pos(control control_, array _pos_1_pos_2______);

// ptr: __sqf::binary__lnbsetdata__control__array__ret__nothing
nothing lnb_set_data(control control_, array __row__column___data__);

// ptr: __sqf::binary__lnbsetpicture__control__array__ret__nothing
nothing lnb_set_picture(control control_, array __row__column___name__);

// ptr: __sqf::binary__lnbsetpicturecolor__control__array__ret__nothing
nothing lnb_set_picture_color(control control_, array __row__column____r_g_b_a___);

// ptr: __sqf::binary__lnbsetpicturecolorright__control__array__ret__nothing
nothing lnb_set_picture_color_right(control control_, array __row__column____r_g_b_a___);

// ptr: __sqf::binary__lnbsetpicturecolorselected__control__array__ret__nothing
nothing lnb_set_picture_color_selected(control control_, array __row__column____r_g_b_a___);

// ptr: __sqf::binary__lnbsetpicturecolorselectedright__control__array__ret__nothing
nothing lnb_set_picture_color_selected_right(control control_, array __row__column____r_g_b_a___);

// ptr: __sqf::binary__lnbsetpictureright__control__array__ret__nothing
nothing lnb_set_picture_right(control control_, array __row__column___name__);

// ptr: __sqf::binary__lnbsettext__control__array__ret__nothing
nothing lnb_set_text(control control_, array __row__column___text__);

// ptr: __sqf::binary__lnbsettextright__control__array__ret__nothing
nothing lnb_set_text_right(control control_, array __row__column___text__);

// ptr: __sqf::binary__lnbsetvalue__control__array__ret__nothing
nothing lnb_set_value(control control_, array __row__column___value__);

// ptr: __sqf::binary__lnbsort__control__array__ret__nothing
nothing lnb_sort(control control_, array _column___order___);

// ptr: __sqf::binary__lnbsortbyvalue__control__array__ret__nothing
nothing lnb_sort_by_value(control control_, array _column___order___);

// ptr: __sqf::binary__lnbtext__control__array__ret__string
string lnb_text(control control_, array _row__column__);

// ptr: __sqf::binary__lnbtextright__control__array__ret__string
string lnb_text_right(control control_, array _row__column__);

// ptr: __sqf::binary__lnbvalue__control__array__ret__scalar
scalar lnb_value(control control_, array _row__column__);

// ptr: __sqf::binary__loadmagazine__object__array__ret__nothing
nothing load_magazine(object vehicle_, array __turret_path__magazine_name__);

// ptr: __sqf::binary__lockcamerato__object__array__ret__nothing
nothing lock_camera_to(object transport_, array _object_position_obj_null___turret_path___);

// ptr: __sqf::binary__lockcargo__object__array__ret__nothing
nothing lock_cargo(object vehicle_, array _cargo_index__lock__);

// ptr: __sqf::binary__lockedturret__object__array__ret__bool
bool locked_turret(object vehicle_, array turret_path_);

// ptr: __sqf::binary__lockturret__object__array__ret__nothing
nothing lock_turret(object vehicle_, array _turret_path__lock__);

// ptr: __sqf::binary__lockwp__object_group__bool__ret__nothing
nothing lock_wp(group group_, bool lock_wp_);

// ptr: __sqf::binary__lockwp__object_group__bool__ret__nothing
nothing lock_wp(object group_, bool lock_wp_);

// ptr: __sqf::binary__lookat__object_array__object_array__ret__nothing
nothing look_at(array unit_s__, array position_);

// ptr: __sqf::binary__lookat__object_array__object_array__ret__nothing
nothing look_at(array unit_s__, object position_);

// ptr: __sqf::binary__lookat__object_array__object_array__ret__nothing
nothing look_at(object unit_s__, array position_);

// ptr: __sqf::binary__lookat__object_array__object_array__ret__nothing
nothing look_at(object unit_s__, object position_);

// ptr: __sqf::binary__lookatpos__control__array__ret__nothing
nothing look_at_pos(control map_, array position_);

// ptr: __sqf::binary__magazinesturret__object__array__ret__array
array magazines_turret(object vehicle_, array turret_path_);

// ptr: __sqf::binary__magazineturretammo__object__array__ret__scalar
scalar magazine_turret_ammo(object vehicle_, array _magazine_class__turret_path__);

// ptr: __sqf::binary__menuaction__control__array__ret__string
string menu_action(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menuadd__control__array__ret__scalar
scalar menu_add(control _menu_strip_control__, array __path____text___);

// ptr: __sqf::binary__menuchecked__control__array__ret__bool
bool menu_checked(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menucollapse__control__array__ret__nothing
nothing menu_collapse(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menudata__control__array__ret__string
string menu_data(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menudelete__control__array__ret__nothing
nothing menu_delete(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menuenable__control__array__ret__nothing
nothing menu_enable(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menuenabled__control__array__ret__bool
bool menu_enabled(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menuexpand__control__array__ret__nothing
nothing menu_expand(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menupicture__control__array__ret__string
string menu_picture(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menusetaction__control__array__ret__nothing
nothing menu_set_action(control _menu_strip_control__, array __path____action___);

// ptr: __sqf::binary__menusetcheck__control__array__ret__nothing
nothing menu_set_check(control _menu_strip_control__, array __path____bool___);

// ptr: __sqf::binary__menusetdata__control__array__ret__nothing
nothing menu_set_data(control _menu_strip_control__, array __path____data___);

// ptr: __sqf::binary__menusetpicture__control__array__ret__nothing
nothing menu_set_picture(control _menu_strip_control__, array __path____picture___);

// ptr: __sqf::binary__menusetvalue__control__array__ret__nothing
nothing menu_set_value(control _menu_strip_control__, array __path___value__);

// ptr: __sqf::binary__menushortcut__control__array__ret__scalar
scalar menu_shortcut(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menushortcuttext__control__array__ret__string
string menu_shortcut_text(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menusize__control__array__ret__scalar
scalar menu_size(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menusort__control__array__ret__nothing
nothing menu_sort(control _menu_strip_control__, array __path____reversed___);

// ptr: __sqf::binary__menutext__control__array__ret__string
string menu_text(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menuurl__control__array__ret__string
string menu_url(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__menuvalue__control__array__ret__scalar
scalar menu_value(control _menu_strip_control__, array _path__);

// ptr: __sqf::binary__modeltoworld__object__array__ret__array
array model_to_world(object object_, array model_pos_);

// ptr: __sqf::binary__modeltoworldvisual__object__array__ret__array
array model_to_world_visual(object object_, array model_pos_);

// ptr: __sqf::binary__move__object_group__array__ret__nothing
nothing move(group group_, array pos_);

// ptr: __sqf::binary__move__object_group__array__ret__nothing
nothing move(object group_, array pos_);

// ptr: __sqf::binary__moveincargo__object__array__ret__nothing
nothing move_in_cargo(object soldier_, array _vehicle__cargo_index__);

// ptr: __sqf::binary__moveinturret__object__array__ret__nothing
nothing move_in_turret(object soldier_, array _vehicle__turret_path__);

// ptr: __sqf::binary__moveto__object__array__ret__nothing
nothing move_to(object person_, array position_);

// ptr: __sqf::binary__nearentities__object_array__scalar_array__ret__array
array near_entities(array position_, array radius_or__type_name__radius__or___type_name_1__type_name_2________radius__);

// ptr: __sqf::binary__nearentities__object_array__scalar_array__ret__array
array near_entities(array position_, float radius_or__type_name__radius__or___type_name_1__type_name_2________radius__);

// ptr: __sqf::binary__nearentities__object_array__scalar_array__ret__array
array near_entities(object position_, array radius_or__type_name__radius__or___type_name_1__type_name_2________radius__);

// ptr: __sqf::binary__nearentities__object_array__scalar_array__ret__array
array near_entities(object position_, float radius_or__type_name__radius__or___type_name_1__type_name_2________radius__);

// ptr: __sqf::binary__nearestobject__array__string__ret__object
object nearest_object(array position_, std::string type_);

// ptr: __sqf::binary__nearestobject__array__scalar__ret__object
object nearest_object(array position_, float id_);

// ptr: __sqf::binary__nearobjects__object_array__scalar_array__ret__array
array near_objects(array position_, array radius_or__type_name__radius__);

// ptr: __sqf::binary__nearobjects__object_array__scalar_array__ret__array
array near_objects(array position_, float radius_or__type_name__radius__);

// ptr: __sqf::binary__nearobjects__object_array__scalar_array__ret__array
array near_objects(object position_, array radius_or__type_name__radius__);

// ptr: __sqf::binary__nearobjects__object_array__scalar_array__ret__array
array near_objects(object position_, float radius_or__type_name__radius__);

// ptr: __sqf::binary__nearobjectsready__object_array__scalar__ret__bool
bool near_objects_ready(array position_, float radius_);

// ptr: __sqf::binary__nearobjectsready__object_array__scalar__ret__bool
bool near_objects_ready(object position_, float radius_);

// ptr: __sqf::binary__nearroads__object_array__scalar__ret__array
array near_roads(array position_or_object_, float radius_);

// ptr: __sqf::binary__nearroads__object_array__scalar__ret__array
array near_roads(object position_or_object_, float radius_);

// ptr: __sqf::binary__nearsupplies__object_array__scalar_array__ret__array
array near_supplies(array position_, array radius_or__type_name__radius__);

// ptr: __sqf::binary__nearsupplies__object_array__scalar_array__ret__array
array near_supplies(array position_, float radius_or__type_name__radius__);

// ptr: __sqf::binary__nearsupplies__object_array__scalar_array__ret__array
array near_supplies(object position_, array radius_or__type_name__radius__);

// ptr: __sqf::binary__nearsupplies__object_array__scalar_array__ret__array
array near_supplies(object position_, float radius_or__type_name__radius__);

// ptr: __sqf::binary__neartargets__object__scalar__ret__array
array near_targets(object unit_, float radius_);

// ptr: __sqf::binary__nmenuitems__control__string_scalar__ret__scalar
scalar n_menu_items(control map_, float menu_index_);

// ptr: __sqf::binary__nmenuitems__control__string_scalar__ret__scalar
scalar n_menu_items(control map_, std::string menu_index_);

// ptr: __sqf::binary__onmapsingleclick__any__code_string__ret__nothing
nothing on_map_single_click(any parameters_, code command_);

// ptr: __sqf::binary__onmapsingleclick__any__code_string__ret__nothing
nothing on_map_single_click(any parameters_, std::string command_);

// ptr: __sqf::binary__ordergetin__array__bool__ret__nothing
nothing order_get_in(array unit_array_, bool order_);

// ptr: __sqf::binary__param__any__array__ret__any
any param(any anything_, array array_);

// ptr: __sqf::binary__params__any__array__ret__bool
bool params(any anything_, array array_);

// ptr: __sqf::binary__posscreentoworld__control__array__ret__array
array pos_screen_to_world(control map_, array _x__y__);

// ptr: __sqf::binary__posworldtoscreen__control__array__ret__array
array pos_world_to_screen(control map_, array position_);

// ptr: __sqf::binary__ppeffectadjust__string__array__ret__nothing
nothing pp_effect_adjust(std::string string_, array array_);

// ptr: __sqf::binary__ppeffectadjust__scalar__array__ret__nothing
nothing pp_effect_adjust(float number_, array array_);

// ptr: __sqf::binary__ppeffectcommit__array__scalar__ret__nothing
nothing pp_effect_commit(array array_, float scalar_);

// ptr: __sqf::binary__ppeffectenable__array__bool__ret__nothing
nothing pp_effect_enable(array array_, bool bool_);

// ptr: __sqf::binary__preloadobject__scalar__object_string__ret__bool
bool preload_object(float distance_, object object_);

// ptr: __sqf::binary__preloadobject__scalar__object_string__ret__bool
bool preload_object(float distance_, std::string object_);

// ptr: __sqf::binary__pushback__array__any__ret__scalar
scalar push_back(array array_, any element_);

// ptr: __sqf::binary__radiochanneladd__scalar__array__ret__nothing
nothing radio_channel_add(float chan_ix_, array _units__);

// ptr: __sqf::binary__radiochannelremove__scalar__array__ret__nothing
nothing radio_channel_remove(float chan_ix_, array _units__);

// ptr: __sqf::binary__remoteexec__any__array__ret__any
any remote_exec(any func_name_, array _func_params__targets__jip_id__);

// ptr: __sqf::binary__remoteexeccall__any__array__ret__any
any remote_exec_call(any func_name_, array _func_params__targets__jip_id__);

// ptr: __sqf::binary__removecuratoraddons__object__array__ret__nothing
nothing remove_curator_addons(object curator_obj_, array _addons__);

// ptr: __sqf::binary__removecuratoreditableobjects__object__array__ret__nothing
nothing remove_curator_editable_objects(object curator_obj_, array __object__remove_crew___true__);

// ptr: __sqf::binary__removedrawicon__control__array__ret__nothing
nothing remove_draw_icon(control map_, array _object__string_identifier__);

// ptr: __sqf::binary__removedrawlinks__control__array__ret__nothing
nothing remove_draw_links(control map_, array _from__param_type__);

// ptr: __sqf::binary__removeeventhandler__object__array__ret__nothing
nothing remove_event_handler(object object_, array handler_);

// ptr: __sqf::binary__removemagazine__object__string_array__ret__nothing
nothing remove_magazine(object unit_, array weapon_name_);

// ptr: __sqf::binary__removemagazine__object__string_array__ret__nothing
nothing remove_magazine(object unit_, std::string weapon_name_);

// ptr: __sqf::binary__removemagazinesturret__object__array__ret__nothing
nothing remove_magazines_turret(object transport_, array _weapon_name__turret_path__);

// ptr: __sqf::binary__removemagazineturret__object__array__ret__nothing
nothing remove_magazine_turret(object transport_, array _weapon_name__turret_path__);

// ptr: __sqf::binary__removempeventhandler__object__array__ret__nothing
nothing remove_mpevent_handler(object object_, array handler_);

// ptr: __sqf::binary__removeweaponattachmentcargo__object__array__ret__nothing
nothing remove_weapon_attachment_cargo(object vehicle_with_supply__, array _weapon_id_creator_id__weapon_attachment___);

// ptr: __sqf::binary__removeweaponcargo__object__array__ret__nothing
nothing remove_weapon_cargo(object vehicle_with_supply__, array _weapon_id_creator_id__);

// ptr: __sqf::binary__removeweaponturret__object__array__ret__nothing
nothing remove_weapon_turret(object vehicle_, array _weapon_name_turret_array__);

// ptr: __sqf::binary__resize__array__scalar__ret__nothing
nothing resize(array array_, float count_);

// ptr: __sqf::binary__respawnvehicle__object__array__ret__nothing
nothing respawn_vehicle(object vehicle_, array _delay____1__count___0__);

// ptr: __sqf::binary__reveal__object_group__object__ret__nothing
nothing reveal(group group_, object unit_);

// ptr: __sqf::binary__reveal__object_group__object__ret__nothing
nothing reveal(object group_, object unit_);

// ptr: __sqf::binary__reveal__object_group__array__ret__nothing
nothing reveal(group group_, array unit_);

// ptr: __sqf::binary__reveal__object_group__array__ret__nothing
nothing reveal(object group_, array unit_);

// ptr: __sqf::binary__ropeattachto__array__object__ret__nothing
nothing rope_attach_to(array _vehicle___to_point____rope_end_down_dir___, object rope_);

// ptr: __sqf::binary__say__object_array__string__ret__nothing
nothing say(array unit_or__unit__target__, std::string speech_name_);

// ptr: __sqf::binary__say__object_array__string__ret__nothing
nothing say(object unit_or__unit__target__, std::string speech_name_);

// ptr: __sqf::binary__say__object_array__array__ret__nothing
nothing say(array unit_or__unit__target__, array speech_name_);

// ptr: __sqf::binary__say__object_array__array__ret__nothing
nothing say(object unit_or__unit__target__, array speech_name_);

// ptr: __sqf::binary__say2d__object_array__string__ret__nothing
nothing say_2d(array unit_or__unit__target__, std::string speech_name_);

// ptr: __sqf::binary__say2d__object_array__string__ret__nothing
nothing say_2d(object unit_or__unit__target__, std::string speech_name_);

// ptr: __sqf::binary__say2d__object_array__array__ret__nothing
nothing say_2d(array unit_or__unit__target__, array speech_name_);

// ptr: __sqf::binary__say2d__object_array__array__ret__nothing
nothing say_2d(object unit_or__unit__target__, array speech_name_);

// ptr: __sqf::binary__say3d__object_array__string__ret__nothing
nothing say_3d(array unit_or__unit__target__, std::string speech_name_);

// ptr: __sqf::binary__say3d__object_array__string__ret__nothing
nothing say_3d(object unit_or__unit__target__, std::string speech_name_);

// ptr: __sqf::binary__say3d__object_array__array__ret__nothing
nothing say_3d(array unit_or__unit__target__, array speech_name_);

// ptr: __sqf::binary__say3d__object_array__array__ret__nothing
nothing say_3d(object unit_or__unit__target__, array speech_name_);

// ptr: __sqf::binary__select__array__scalar__ret__any
any select(array array_, float index_);

// ptr: __sqf::binary__select__array__bool__ret__any
any select(array array_, bool index_);

// ptr: __sqf::binary__select__array__array__ret__array
array select(array array_, array _start_length__);

// ptr: __sqf::binary__select__string__array__ret__string
string select(std::string source_string_, array _start_length__);

// ptr: __sqf::binary__selectionposition__object__string_array__ret__array
array selection_position(object object_, array selection_name_or__selection_name__lod_name__);

// ptr: __sqf::binary__selectionposition__object__string_array__ret__array
array selection_position(object object_, std::string selection_name_or__selection_name__lod_name__);

// ptr: __sqf::binary__selectweaponturret__object__array__ret__nothing
nothing select_weapon_turret(object vehicle_, array _weapon__turret_path__);

// ptr: __sqf::binary__sendtask__team_member__array__ret__task
task send_task(team_member sender_, array _receiver___type__or__type__parent_task___priority__name_1__value_1__name_2__value_2_______);

// ptr: __sqf::binary__sendtaskresult__task__array__ret__nothing
nothing send_task_result(task task_, array _state__result__sentence__);

// ptr: __sqf::binary__set__array__array__ret__nothing
nothing set(array array_, array element_);

// ptr: __sqf::binary__set3denattribute__any__array__ret__bool
bool set_3denattribute(any _entity__, array __attribute_type___value___);

// ptr: __sqf::binary__set3denobjecttype__array__string__ret__nothing
nothing set_3denobject_type(array _editor_objects__, std::string object_class_name_);

// ptr: __sqf::binary__setammo__object__array__ret__nothing
nothing set_ammo(object unit_, array _weapon__count__);

// ptr: __sqf::binary__setattributes__text_string__array__ret__text
text set_attributes(std::string text_, array _name_1__value_1__name_2__value_2_______);

// ptr: __sqf::binary__setattributes__text_string__array__ret__text
text set_attributes(text text_, array _name_1__value_1__name_2__value_2_______);

// ptr: __sqf::binary__setbehaviour__object_group__string__ret__nothing
nothing set_behaviour(group group_, std::string behaviour_);

// ptr: __sqf::binary__setbehaviour__object_group__string__ret__nothing
nothing set_behaviour(object group_, std::string behaviour_);

// ptr: __sqf::binary__setbrakesrtd__object__array__ret__nothing
nothing set_brakes_rtd(object rtd_helicopter_, array _value__index__);

// ptr: __sqf::binary__setcaptive__object__bool_scalar__ret__nothing
nothing set_captive(object person_, bool captive_);

// ptr: __sqf::binary__setcaptive__object__bool_scalar__ret__nothing
nothing set_captive(object person_, float captive_);

// ptr: __sqf::binary__setcenterofmass__object__array__ret__nothing
nothing set_center_of_mass(object object_, array com_or__com__time___com__vector_);

// ptr: __sqf::binary__setcombatmode__object_group__string__ret__nothing
nothing set_combat_mode(group group_, std::string mode_);

// ptr: __sqf::binary__setcombatmode__object_group__string__ret__nothing
nothing set_combat_mode(object group_, std::string mode_);

// ptr: __sqf::binary__setcuratorcoef__object__array__ret__nothing
nothing set_curator_coef(object curator_obj_, array _action__coefficient_enabled___);

// ptr: __sqf::binary__setcurrentwaypoint__group__array__ret__nothing
nothing set_current_waypoint(group group_, array waypoint_);

// ptr: __sqf::binary__setdebriefingtext__string__array__ret__nothing
nothing set_debriefing_text(std::string end_type_, array _title__description__);

// ptr: __sqf::binary__setdestination__object__array__ret__nothing
nothing set_destination(object object_, array _position__planning_mode__force_replan__);

// ptr: __sqf::binary__setdrawicon__control__array__ret__nothing
nothing set_draw_icon(control map_, array _object__texture__color__offset__width__height__maintain_size___angle__string_identifier__shadow__is_3d__draw_line___priority__);

// ptr: __sqf::binary__seteditorobjectscope__control__array__ret__nothing
nothing set_editor_object_scope(control map_, array _objects_editor_type_condition_scope_subordinates_also__);

// ptr: __sqf::binary__seteffectcondition__object_array__string__ret__nothing
nothing set_effect_condition(array trigger_or_waypoint_, std::string statement_);

// ptr: __sqf::binary__seteffectcondition__object_array__string__ret__nothing
nothing set_effect_condition(object trigger_or_waypoint_, std::string statement_);

// ptr: __sqf::binary__setenginerpmrtd__object__array__ret__nothing
nothing set_engine_rpm_rtd(object rtd_helicopter_, array _value__motor_index__);

// ptr: __sqf::binary__setfog__scalar__scalar_array__ret__nothing
nothing set_fog(float time_, array fog_);

// ptr: __sqf::binary__setfog__scalar__scalar_array__ret__nothing
nothing set_fog(float time_, float fog_);

// ptr: __sqf::binary__setforcegeneratorrtd__scalar__array__ret__nothing
nothing set_force_generator_rtd(float arg_1_, array arg_2_);

// ptr: __sqf::binary__setformation__object_group__string__ret__nothing
nothing set_formation(group group_, std::string formation_);

// ptr: __sqf::binary__setformation__object_group__string__ret__nothing
nothing set_formation(object group_, std::string formation_);

// ptr: __sqf::binary__setformdir__object_group__scalar__ret__nothing
nothing set_form_dir(group group_, float heading_);

// ptr: __sqf::binary__setformdir__object_group__scalar__ret__nothing
nothing set_form_dir(object group_, float heading_);

// ptr: __sqf::binary__setfriend__side__array__ret__nothing
nothing set_friend(side side_1_, array _side_2__value__);

// ptr: __sqf::binary__setfsmvariable__scalar__array__ret__nothing
nothing set_fsmvariable(float fsm_handle_, array _name__value__);

// ptr: __sqf::binary__setgroupicon__group__array__ret__nothing
nothing set_group_icon(group group_, array properties_);

// ptr: __sqf::binary__setgroupiconparams__group__array__ret__nothing
nothing set_group_icon_params(group group_, array properties_);

// ptr: __sqf::binary__setgroupid__object_group__array__ret__nothing
nothing set_groupid(group group_, array _name_fomat__name_param_1_______);

// ptr: __sqf::binary__setgroupid__object_group__array__ret__nothing
nothing set_groupid(object group_, array _name_fomat__name_param_1_______);

// ptr: __sqf::binary__setgroupidglobal__object_group__array__ret__nothing
nothing set_group_id_global(group group_, array _name_fomat__name_param_1_______);

// ptr: __sqf::binary__setgroupidglobal__object_group__array__ret__nothing
nothing set_group_id_global(object group_, array _name_fomat__name_param_1_______);

// ptr: __sqf::binary__sethidebehind__object__array__ret__nothing
nothing set_hide_behind(object object_, array _object_where_hide__hide_position__);

// ptr: __sqf::binary__sethit__object__array__ret__nothing
nothing set_hit(object object_, array _part__damage__);

// ptr: __sqf::binary__sethitindex__object__array__ret__nothing
nothing set_hit_index(object object_, array _index__damage__);

// ptr: __sqf::binary__sethitpointdamage__object__array__ret__nothing
nothing set_hit_point_damage(object object_, array _part__damage__);

// ptr: __sqf::binary__setlightambient__object__array__ret__nothing
nothing set_light_ambient(object light_, array _r__g__b__);

// ptr: __sqf::binary__setlightattenuation__object__array__ret__nothing
nothing set_light_attenuation(object light_, array _start_attenuation__constant_attenuation__linear_attenuation__quadratic_attenuation__hard_limit_start__hard_limit_end__);

// ptr: __sqf::binary__setlightcolor__object__array__ret__nothing
nothing set_light_color(object light_, array _r__g__b__);

// ptr: __sqf::binary__setmagazineturretammo__object__array__ret__nothing
nothing set_magazine_turret_ammo(object vehicle_, array _magazine_class__ammo_count__turret_path__);

// ptr: __sqf::binary__setmarkerpos__string__array__ret__nothing
nothing set_marker_pos(std::string marker_name_, array pos_);

// ptr: __sqf::binary__setmarkerposlocal__string__array__ret__nothing
nothing set_marker_pos_local(std::string marker_name_, array pos_);

// ptr: __sqf::binary__setmarkersize__string__array__ret__nothing
nothing set_marker_size(std::string marker_, array size_);

// ptr: __sqf::binary__setmarkersizelocal__string__array__ret__nothing
nothing set_marker_size_local(std::string marker_, array size_);

// ptr: __sqf::binary__setmass__object__scalar_array__ret__nothing
nothing set_mass(object object_, array mass_or__mass__time__);

// ptr: __sqf::binary__setmass__object__scalar_array__ret__nothing
nothing set_mass(object object_, float mass_or__mass__time__);

// ptr: __sqf::binary__setmusiceffect__object_array__string__ret__nothing
nothing set_music_effect(array trigger_or_waypoint_, std::string track_);

// ptr: __sqf::binary__setmusiceffect__object_array__string__ret__nothing
nothing set_music_effect(object trigger_or_waypoint_, std::string track_);

// ptr: __sqf::binary__setname__object__array__ret__nothing
nothing set_name(object person_, array _name__first_name__second_name__);

// ptr: __sqf::binary__setobjectarguments__control__array__ret__any
any set_object_arguments(control map_, array _object___name_1__value_1________);

// ptr: __sqf::binary__setobjectmaterial__object__array__ret__nothing
nothing set_object_material(object object_, array _selection__material__);

// ptr: __sqf::binary__setobjectmaterialglobal__object__array__ret__nothing
nothing set_object_material_global(object object_, array _selection__material__);

// ptr: __sqf::binary__setobjectproxy__control__array__ret__any
any set_object_proxy(control map_, array _object__proxy_object__);

// ptr: __sqf::binary__setobjecttexture__object__array__ret__nothing
nothing set_object_texture(object object_, array texture_);

// ptr: __sqf::binary__setobjecttextureglobal__object__array__ret__nothing
nothing set_object_texture_global(object obj_, array _selection_texture__);

// ptr: __sqf::binary__setparticlecircle__object__array__ret__nothing
nothing set_particle_circle(object particle_source_, array _radius__velocity__);

// ptr: __sqf::binary__setparticlefire__object__array__ret__nothing
nothing set_particle_fire(object particle_source_, array _core_intensity__core_distance__damage_time__);

// ptr: __sqf::binary__setparticleparams__object__array__ret__nothing
nothing set_particle_params(object particle_source_, array array_);

// ptr: __sqf::binary__setparticlerandom__object__array__ret__nothing
nothing set_particle_random(object particle_source_, array _life_time__position__move_velocity__rotation_velocity__size__color__random_direction_period__random_direction_intensity___angle___);

// ptr: __sqf::binary__setpipeffect__string__array__ret__nothing
nothing set_pi_peffect(std::string pip_target_name_, array _effect__optional_param_1_______optional_param_n__);

// ptr: __sqf::binary__setpos__object__array__ret__nothing
nothing set_pos(object obj_, array pos_);

// ptr: __sqf::binary__setposasl__object__array__ret__nothing
nothing set_pos_asl(object obj_, array pos_);

// ptr: __sqf::binary__setposasl2__object__array__ret__nothing
nothing set_pos_asl2(object obj_, array pos_);

// ptr: __sqf::binary__setposaslw__object__array__ret__nothing
nothing set_pos_aslw(object obj_, array pos_);

// ptr: __sqf::binary__setposatl__object__array__ret__nothing
nothing set_pos_atl(object obj_, array pos_);

// ptr: __sqf::binary__setposition__location__array__ret__nothing
nothing set_position(location location_, array position_);

// ptr: __sqf::binary__setposworld__object__array__ret__nothing
nothing set_pos_world(object obj_, array pos_);

// ptr: __sqf::binary__setsimpletaskdescription__task__array__ret__nothing
nothing set_simple_task_description(task task_, array _description__description_short__description_hud__);

// ptr: __sqf::binary__setsimpletaskdestination__task__array__ret__nothing
nothing set_simple_task_destination(task task_, array position_);

// ptr: __sqf::binary__setsimpletasktarget__task__array__ret__nothing
nothing set_simple_task_target(task task_, array _target_precise_position__);

// ptr: __sqf::binary__setsize__location__array__ret__nothing
nothing set_size(location location_, array _size_x__size_z__);

// ptr: __sqf::binary__setskill__object__array__ret__nothing
nothing set_skill(object vehicle_, array _type__skill__);

// ptr: __sqf::binary__setsoundeffect__object_array__array__ret__nothing
nothing set_sound_effect(array trigger_or_waypoint_, array _sound__voice__sound_env__sound_det__);

// ptr: __sqf::binary__setsoundeffect__object_array__array__ret__nothing
nothing set_sound_effect(object trigger_or_waypoint_, array _sound__voice__sound_env__sound_det__);

// ptr: __sqf::binary__setspeedmode__object_group__string__ret__nothing
nothing set_speed_mode(group group_, std::string mode_);

// ptr: __sqf::binary__setspeedmode__object_group__string__ret__nothing
nothing set_speed_mode(object group_, std::string mode_);

// ptr: __sqf::binary__settaskresult__task__array__ret__nothing
nothing set_task_result(task task_, array _state__result__);

// ptr: __sqf::binary__settitleeffect__object_array__array__ret__nothing
nothing set_title_effect(array trigger_or_waypoint_, array _type__effect__text__);

// ptr: __sqf::binary__settitleeffect__object_array__array__ret__nothing
nothing set_title_effect(object trigger_or_waypoint_, array _type__effect__text__);

// ptr: __sqf::binary__settriggeractivation__object__array__ret__nothing
nothing set_trigger_activation(object trigger_, array _by__type__repeating__);

// ptr: __sqf::binary__settriggerarea__object__array__ret__nothing
nothing set_trigger_area(object trigger_, array _a__b__angle__rectangle__);

// ptr: __sqf::binary__settriggerstatements__object__array__ret__nothing
nothing set_trigger_statements(object trigger_, array _cond__activ__desactiv__);

// ptr: __sqf::binary__settriggertimeout__object__array__ret__nothing
nothing set_trigger_timeout(object trigger_, array _min__mid__max__interruptable__);

// ptr: __sqf::binary__setunloadincombat__object__array__ret__nothing
nothing set_unload_in_combat(object vehicle_, array _allow_cargo__allow_turrets__);

// ptr: __sqf::binary__setuseractiontext__object__array__ret__nothing
nothing set_user_action_text(object unit_, array _action_index___text____text_default____text_tool_tip___);

// ptr: __sqf::binary__setvariable__namespace__array__ret__nothing
nothing set_variable(namespace namespace_, array _name__value__public__);

// ptr: __sqf::binary__setvariable__display__array__ret__nothing
nothing set_variable(display display_, array _name__value__);

// ptr: __sqf::binary__setvariable__control__array__ret__nothing
nothing set_variable(control control_, array _name__value__);

// ptr: __sqf::binary__setvariable__object__array__ret__nothing
nothing set_variable(object object_, array _name__value__public__);

// ptr: __sqf::binary__setvariable__group__array__ret__nothing
nothing set_variable(group group_, array _name__value__public__);

// ptr: __sqf::binary__setvariable__team_member__array__ret__nothing
nothing set_variable(team_member team_member_, array _name__value__public__);

// ptr: __sqf::binary__setvariable__task__array__ret__nothing
nothing set_variable(task task_, array _name__value__);

// ptr: __sqf::binary__setvariable__location__array__ret__nothing
nothing set_variable(location location_, array _name__value__);

// ptr: __sqf::binary__setvectordir__object__array__ret__nothing
nothing set_vector_dir(object object_, array _x__z__y__);

// ptr: __sqf::binary__setvectordirandup__object__array__ret__nothing
nothing set_vector_dir_and_up(object object_, array __x__z__y___x__y__z___);

// ptr: __sqf::binary__setvectorup__object__array__ret__nothing
nothing set_vector_up(object object_, array _x__z__y__);

// ptr: __sqf::binary__setvehicleposition__object__array__ret__bool
bool set_vehicle_position(object object_, array _position__markers__placement__special__);

// ptr: __sqf::binary__setvehicletipars__object__array__ret__nothing
nothing set_vehicle_ti_pars(object vehicle_, array ti_params_);

// ptr: __sqf::binary__setvelocity__object__array__ret__nothing
nothing set_velocity(object vehicle_, array _x__z__y__);

// ptr: __sqf::binary__setvelocitytransformation__object__array__ret__nothing
nothing set_velocity_transformation(object soldier_, array _position_1__position_2__velocity_1__velocity_2__direction_1__direction_2__up_1__up_2__time__);

// ptr: __sqf::binary__setvisibleiftreecollapsed__control__array__ret__nothing
nothing set_visible_if_tree_collapsed(control map_, array _object__visible_if_tree_collapsed__);

// ptr: __sqf::binary__setwantedrpmrtd__object__array__ret__nothing
nothing set_wanted_rpmrtd(object rtd_helicopter_, array _value__0_1___time_to_reach__motor_index__);

// ptr: __sqf::binary__setwaypointbehaviour__array__string__ret__nothing
nothing set_waypoint_behaviour(array waypoint_, std::string mode_);

// ptr: __sqf::binary__setwaypointcombatmode__array__string__ret__nothing
nothing set_waypoint_combat_mode(array waypoint_, std::string mode_);

// ptr: __sqf::binary__setwaypointcompletionradius__array__scalar__ret__nothing
nothing set_waypoint_completion_radius(array waypoint_, float radius_);

// ptr: __sqf::binary__setwaypointdescription__array__string__ret__nothing
nothing set_waypoint_description(array waypoint_, std::string text_);

// ptr: __sqf::binary__setwaypointformation__array__string__ret__nothing
nothing set_waypoint_formation(array waypoint_, std::string formation_);

// ptr: __sqf::binary__setwaypointhouseposition__array__scalar__ret__nothing
nothing set_waypoint_house_position(array waypoint_, float pos_);

// ptr: __sqf::binary__setwaypointloiterradius__array__scalar__ret__nothing
nothing set_waypoint_loiter_radius(array waypoint_, float loiter_radius_);

// ptr: __sqf::binary__setwaypointloitertype__array__string__ret__nothing
nothing set_waypoint_loiter_type(array waypoint_, std::string loiter_type_);

// ptr: __sqf::binary__setwaypointname__array__string__ret__nothing
nothing set_waypoint_name(array waypoint_, std::string name_);

// ptr: __sqf::binary__setwaypointposition__array__array__ret__nothing
nothing set_waypoint_position(array waypoint_, array _center__radius__);

// ptr: __sqf::binary__setwaypointscript__array__string__ret__nothing
nothing set_waypoint_script(array waypoint_, std::string command_);

// ptr: __sqf::binary__setwaypointspeed__array__string__ret__nothing
nothing set_waypoint_speed(array waypoint_, std::string mode_);

// ptr: __sqf::binary__setwaypointstatements__array__array__ret__nothing
nothing set_waypoint_statements(array waypoint_, array _condition__statement__);

// ptr: __sqf::binary__setwaypointtimeout__array__array__ret__nothing
nothing set_waypoint_timeout(array waypoint_, array _min__mid__max__);

// ptr: __sqf::binary__setwaypointtype__array__string__ret__nothing
nothing set_waypoint_type(array waypoint_, std::string type_);

// ptr: __sqf::binary__setwaypointvisible__array__bool__ret__nothing
nothing set_waypoint_visible(array waypoint_, bool visible_);

// ptr: __sqf::binary__setweaponreloadingtime__object__array__ret__bool
bool set_weapon_reloading_time(object vehicle_, array _gunner_unit__weapon_name__reload_time__0_1___);

// ptr: __sqf::binary__setwingforcescalertd__object__array__ret__nothing
nothing set_wing_force_scale_rtd(object rtd_helicopter_, array _left_horizontal__right_horizontal__vertical__);

// ptr: __sqf::binary__setwppos__array__array__ret__nothing
nothing set_wppos(array wapoint_, array position_);

// ptr: __sqf::binary__showneweditorobject__control__array__ret__any
any show_new_editor_object(control map_, array _type__class__side__position__);

// ptr: __sqf::binary__showwaypoint__array__string__ret__nothing
nothing show_waypoint(array waypoint_, std::string show_);

// ptr: __sqf::binary__sidechat__object_array__string__ret__nothing
nothing side_chat(array unit_, std::string chat_text_);

// ptr: __sqf::binary__sidechat__object_array__string__ret__nothing
nothing side_chat(object unit_, std::string chat_text_);

// ptr: __sqf::binary__sideradio__object_array__string__ret__nothing
nothing side_radio(array unit_, std::string radio_name_);

// ptr: __sqf::binary__sideradio__object_array__string__ret__nothing
nothing side_radio(object unit_, std::string radio_name_);

// ptr: __sqf::binary__slidersetrange__control__array__ret__nothing
nothing slider_set_range(control control_, array _min__max__);

// ptr: __sqf::binary__slidersetspeed__control__array__ret__nothing
nothing slider_set_speed(control control_, array _line__page__);

// ptr: __sqf::binary__sort__array__bool__ret__nothing
nothing sort(array array_, bool order_);

// ptr: __sqf::binary__splitstring__string__string__ret__array
array split_string(std::string string_, std::string string_);

// ptr: __sqf::binary__synchronizeobjectsadd__object__array__ret__nothing
nothing synchronize_objects_add(object unit_trigger_, array _objects__);

// ptr: __sqf::binary__synchronizeobjectsremove__object__array__ret__nothing
nothing synchronize_objects_remove(object unit_trigger_, array _objects__);

// ptr: __sqf::binary__synchronizetrigger__object__array__ret__nothing
nothing synchronize_trigger(object trigger_, array _waypoint_1__waypoint_2_______);

// ptr: __sqf::binary__synchronizewaypoint__array__array__ret__nothing
nothing synchronize_waypoint(array waypoint_, array _waypoint_1__waypoint_2_______);

// ptr: __sqf::binary__synchronizewaypoint__object__array__ret__nothing
nothing synchronize_waypoint(object trigger_, array _waypoint_1__waypoint_2_______);

// ptr: __sqf::binary__targetknowledge__object__object__ret__array
array target_knowledge(object unit_, object target_);

// ptr: __sqf::binary__targetsaggregate__array__array__ret__array
array targets_aggregate(array _speaker__side__unit__place__time__, array candidates_);

// ptr: __sqf::binary__targetsquery__object__array__ret__array
array targets_query(object speaker_, array _receiver__side__unit__place__time__);

// ptr: __sqf::binary__then__if__array__ret__any
any then(if if_, array else_);

// ptr: __sqf::binary__triggerattachvehicle__object__array__ret__nothing
nothing trigger_attach_vehicle(object trigger_, array ___or__vehicle__);

// ptr: __sqf::binary__turretlocal__object__array__ret__bool
bool turret_local(object vehicle_, array turret_array_);

// ptr: __sqf::binary__turretowner__object__array__ret__scalar
scalar turret_owner(object vehicle_, array _turret_path__);

// ptr: __sqf::binary__turretunit__object__array__ret__object
object turret_unit(object vehicle_, array turret_path_);

// ptr: __sqf::binary__tvadd__control__array__ret__scalar
scalar tv_add(control control_, array __path___text__);

// ptr: __sqf::binary__tvcollapse__control__array__ret__nothing
nothing tv_collapse(control control_, array _path__);

// ptr: __sqf::binary__tvcount__control__array__ret__scalar
scalar tv_count(control control_, array _path__);

// ptr: __sqf::binary__tvdata__control__array__ret__string
string tv_data(control control_, array _path__);

// ptr: __sqf::binary__tvdelete__control__array__ret__nothing
nothing tv_delete(control control_, array _path__);

// ptr: __sqf::binary__tvexpand__control__array__ret__nothing
nothing tv_expand(control control_, array _path__);

// ptr: __sqf::binary__tvpicture__control__array__ret__string
string tv_picture(control control_, array _path__);

// ptr: __sqf::binary__tvpictureright__control__array__ret__string
string tv_picture_right(control control_, array _path__);

// ptr: __sqf::binary__tvsetcursel__control__array__ret__nothing
nothing tv_set_cur_sel(control control_, array _path__);

// ptr: __sqf::binary__tvsetdata__control__array__ret__nothing
nothing tv_set_data(control control_, array __path___text__);

// ptr: __sqf::binary__tvsetpicture__control__array__ret__nothing
nothing tv_set_picture(control control_, array __path___name__);

// ptr: __sqf::binary__tvsetpicturecolor__control__array__ret__nothing
nothing tv_set_picture_color(control control_, array __path____r_g_b_a___);

// ptr: __sqf::binary__tvsetpicturecolorright__control__array__ret__nothing
nothing tv_set_picture_color_right(control control_, array __path____r_g_b_a___);

// ptr: __sqf::binary__tvsetpictureright__control__array__ret__nothing
nothing tv_set_picture_right(control control_, array __path___name__);

// ptr: __sqf::binary__tvsettooltip__control__array__ret__nothing
nothing tv_set_tooltip(control control_, array __path___tooltip__);

// ptr: __sqf::binary__tvsetvalue__control__array__ret__nothing
nothing tv_set_value(control control_, array __path___val__);

// ptr: __sqf::binary__tvsort__control__array__ret__nothing
nothing tv_sort(control control_, array __path___reversed__);

// ptr: __sqf::binary__tvsortbyvalue__control__array__ret__nothing
nothing tv_sort_by_value(control control_, array __path___reversed__);

// ptr: __sqf::binary__tvtext__control__array__ret__string
string tv_text(control control_, array _path__);

// ptr: __sqf::binary__tvvalue__control__array__ret__scalar
scalar tv_value(control control_, array _path__);

// ptr: __sqf::binary__unitsbelowheight__group__scalar__ret__array
array units_below_height(group group_, float height_);

// ptr: __sqf::binary__unitsbelowheight__array__scalar__ret__array
array units_below_height(array array_, float height_);

// ptr: __sqf::binary__updatedrawicon__control__array__ret__nothing
nothing update_draw_icon(control map_, array _object__string_identifier__color__offset__width__height__maintain_size___angle__shadow__);

// ptr: __sqf::binary__updatemenuitem__control__array__ret__nothing
nothing update_menu_item(control map_, array _menu_item_index_text_command__);

// ptr: __sqf::binary__vectoradd__array__array__ret__array
array vector_add(array vector_, array vector_);

// ptr: __sqf::binary__vectorcos__array__array__ret__scalar
scalar vector_cos(array vector_, array vector_);

// ptr: __sqf::binary__vectorcrossproduct__array__array__ret__array
array vector_cross_product(array vector_, array vector_);

// ptr: __sqf::binary__vectordiff__array__array__ret__array
array vector_diff(array vector_, array vector_);

// ptr: __sqf::binary__vectordistance__array__array__ret__scalar
scalar vector_distance(array vector_, array vector_);

// ptr: __sqf::binary__vectordistancesqr__array__array__ret__scalar
scalar vector_distance_sqr(array vector_, array vector_);

// ptr: __sqf::binary__vectordotproduct__array__array__ret__scalar
scalar vector_dot_product(array vector_, array vector_);

// ptr: __sqf::binary__vectorfromto__array__array__ret__array
array vector_from_to(array vector_, array vector_);

// ptr: __sqf::binary__vectormultiply__array__scalar__ret__array
array vector_multiply(array vector_, float scalar_);

// ptr: __sqf::binary__waypointattachobject__array__object_scalar__ret__nothing
nothing waypoint_attach_object(array waypoint_, object id_static_or_object_);

// ptr: __sqf::binary__waypointattachobject__array__object_scalar__ret__nothing
nothing waypoint_attach_object(array waypoint_, float id_static_or_object_);

// ptr: __sqf::binary__waypointattachvehicle__array__object__ret__nothing
nothing waypoint_attach_vehicle(array waypoint_, object vehicle_);

// ptr: __sqf::binary__weaponaccessories__object__string__ret__array
array weapon_accessories(object vehicle_, std::string weapon_);

// ptr: __sqf::binary__weaponaccessoriescargo__object__array__ret__array
array weapon_accessories_cargo(object vehicle_, array _weapon_id_creator_id__);

// ptr: __sqf::binary__weapondirection__object__string__ret__array
array weapon_direction(object vehicle_, std::string weapon_name_);

// ptr: __sqf::binary__weaponsturret__object__array__ret__array
array weapons_turret(object vehicle_, array turret_path_);

// ptr: __sqf::binary__worldtomodel__object__array__ret__array
array world_to_model(object object_, array world_pos_);

// ptr: __sqf::binary__worldtomodelvisual__object__array__ret__array
array world_to_model_visual(object object_, array world_pos_);

