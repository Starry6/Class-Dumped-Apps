@interface AWEPOIListControllerManager : NSObject
@property (nonatomic) NSMutableArray controllersArray;
- (id)controllersArray;
- (void)setControllersArray:;
- (void)listAnchorControllerDidSetupPopupViewController:;
- (void)listAnchorControllerDidClosePopupViewController:;
- (BOOL)isShowingListAnchorPopupViewController;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
