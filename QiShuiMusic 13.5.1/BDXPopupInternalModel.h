@interface BDXPopupInternalModel : NSObject
@property (nonatomic) NSNumber disable_outside_click_close;
@property (nonatomic) NSNumber enable_pull_down_close;
@property (nonatomic) NSString mask_bg_color;
@property (nonatomic) NSString argb_mask_color;
@property (nonatomic) NSString mask_color;
@property (nonatomic) NSNumber enable_trigger_showhide;
@property (nonatomic) NSNumber hide_nav_bar;
@property (nonatomic) NSNumber drag_follow_gesture;
@property (nonatomic) NSNumber resize_duration;
@property (nonatomic) NSString status_bar_color;
@property (nonatomic) NSDictionary type;
@property (nonatomic) NSNumber fixed_height;
@property (nonatomic) NSNumber horizontal_width_percent;
@property (nonatomic) NSNumber horizontal_height_percent;
@property (nonatomic) NSNumber horizontal_radius;
@property (nonatomic) NSNumber up_offset_height;
@property (nonatomic) NSString pull_down_indicator_color;
@property (nonatomic) NSString up_status_bar_bg_color;
- (id)argb_mask_color;
- (id)resize_duration;
- (void)setDisable_outside_click_close:;
- (id)disable_outside_click_close;
- (id)drag_follow_gesture;
- (id)enable_pull_down_close;
- (id)enable_trigger_showhide;
- (id)fixed_height;
- (id)hide_nav_bar;
- (id)horizontal_height_percent;
- (id)horizontal_radius;
- (id)horizontal_width_percent;
- (id)mask_bg_color;
- (id)mask_color;
- (id)pull_down_indicator_color;
- (void)setArgb_mask_color:;
- (void)setDrag_follow_gesture:;
- (void)setEnable_pull_down_close:;
- (void)setEnable_trigger_showhide:;
- (void)setFixed_height:;
- (void)setHide_nav_bar:;
- (void)setHorizontal_height_percent:;
- (void)setHorizontal_radius:;
- (void)setHorizontal_width_percent:;
- (void)setMask_bg_color:;
- (void)setMask_color:;
- (void)setPull_down_indicator_color:;
- (void)setResize_duration:;
- (void)setStatus_bar_color:;
- (void)setUp_offset_height:;
- (void)setUp_status_bar_bg_color:;
- (id)status_bar_color;
- (id)up_offset_height;
- (id)up_status_bar_bg_color;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
@end
