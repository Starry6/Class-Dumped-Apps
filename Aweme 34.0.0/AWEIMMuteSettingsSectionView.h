@interface AWEIMMuteSettingsSectionView : UIView
@property (nonatomic) double itemOriginY;
@property (nonatomic) <AWEIMMuteSettingsRowViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)muteSettingsRowViewSwitchChangedWithView:isOn:;
- (void)addRowView:;
- (void)setItemOriginY:;
- (double)itemOriginY;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)viewWithTitle:section:;
@end
