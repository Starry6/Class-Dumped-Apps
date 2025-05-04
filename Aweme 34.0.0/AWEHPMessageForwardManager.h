@interface AWEHPMessageForwardManager : NSObject
@property (nonatomic) NSPointerArray delegateArray;
- (id)delegateArray;
- (void)setDelegateArray:;
- (BOOL)isEditPanelEnabled;
- (void)didLongPressTopBar;
- (BOOL)showPanelWithEnterMethod:;
- (void)registerDelegate:;
- (void).cxx_destruct;
@end
