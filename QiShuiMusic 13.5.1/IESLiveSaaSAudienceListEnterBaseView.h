@interface IESLiveSaaSAudienceListEnterBaseView : UIView
@property (nonatomic) BOOL shouldShowEnter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowEnter;
- (void)refreshUserListWithAuthMessage:;
- (void)disableDouPlusIndicatorAndDismiss;
- (void)enableDouPlusIndicatorAndShow;
- (id)pluginLayoutContentSize;
- (void)refreshDouPlusUserCount:;
- (void)refreshTotalUser:;
- (void)refreshUserCount:;
- (void)refreshUserListWithMessage:;
- (void)refreshUserListWithModel:;
- (void)setShouldShowEnter:;
- (void)showTipView;
- (id)viewType;
@end
