@interface AWEScreenShootShareViewModel : NSObject
@property (nonatomic) NSMutableArray panelDataArr;
@property (nonatomic) BOOL canShareOutside;
@property (nonatomic) BOOL noQRCodeAndNoAwemeModelCheck;
- (id)filterTranspondIMShareModelListIfNeeded:;
- (void)loadPanelDataWithAweme:completion:;
- (id)panelDataArr;
- (void)_loadPanelDataFriendsArr:hasMore:completion:;
- (void)setPanelDataArr:;
- (void)getViewModelActiveState:;
- (void)p_acquireUserActive:withArray:hasMore:withCompletion:;
- (id)panelListArray;
- (id)setUpScreenShootPanelDataArray;
- (void)setCanShareOutside:;
- (void)setNoQRCodeAndNoAwemeModelCheck:;
- (void)getInteractiveFriendsWithAweme:DataCompletion:;
- (BOOL)canShareOutside;
- (BOOL)noQRCodeAndNoAwemeModelCheck;
- (void).cxx_destruct;
@end
