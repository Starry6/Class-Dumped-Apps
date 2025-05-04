@interface AWEIMEnterpriseNonFriendActiveSettingsManager : NSObject
@property (nonatomic) BOOL isDisplayingPopup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidDismiss:;
- (void)showPopupView;
- (BOOL)isDisplayingPopup;
- (void)setIsDisplayingPopup:;
- (id)__assembleDuxSheet;
- (id)__assembleDuxInfoPanel;
- (id)__assembleSwitchContainer;
- (id)__assembleDuxSwitch;
+ (id)sharedInstance;
@end
