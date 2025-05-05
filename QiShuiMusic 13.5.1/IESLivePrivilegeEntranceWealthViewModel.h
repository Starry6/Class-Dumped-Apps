@interface IESLivePrivilegeEntranceWealthViewModel : IESLiveCubeViewModel
@property (nonatomic) NSDictionary selectedGiftInfo;
@property (nonatomic) BOOL shouldShowWealthView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionSelectedGiftInfo:;
- (void)incomeResultDidUpdate;
- (id)selectedGiftInfo;
- (void)setSelectedGiftInfo:;
- (void)setShouldShowWealthView:;
- (BOOL)shouldShowPrivilegeEntranceWealth;
- (BOOL)shouldShowWealthView;
- (double)wealthViewHeight;
- (id)init;
- (void).cxx_destruct;
@end
