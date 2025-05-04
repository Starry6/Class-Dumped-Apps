@interface AWENewMaskVideoProductDetailPresenter : AWEVideoPaymentBasePresenter
@property (nonatomic) AWEAwemeModel currentModel;
- (void)checkVideoShouldUnlock:;
- (id)initWithView:model:referString:logExtra:context:;
- (void)checkVideoShouldUnlockIfNeed;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setCurrentModel:;
+ (BOOL)shouldActiveWithData:referString:logExtra:;
@end
