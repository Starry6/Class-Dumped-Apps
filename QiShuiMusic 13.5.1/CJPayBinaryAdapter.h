@interface CJPayBinaryAdapter : NSObject
@property (nonatomic) <CJPayManagerAdapterDelegate> managerDelegate;
@property (nonatomic) <CJPayHomeBizAdapterDelegate> confirmPresenterDelegate;
- (id)confirmPresenterDelegate;
- (void)setConfirmPresenterDelegate:;
- (void).cxx_destruct;
- (void)setManagerDelegate:;
- (id)managerDelegate;
+ (id)shared;
@end
