@interface AWEIMMessageNotice_Mute_Plugin : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)__trackShowData;
- (void)__fansGroupNoticeTipCellDidTapTracker;
- (void)__didClickedNoticeTipCell;
- (void)__trackEnterNoticeSettingEvent;
+ (BOOL)canCreateComponentWithContext:;
@end
