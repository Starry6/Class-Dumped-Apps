@interface IESECGoodsDetailPendantView : UIView
@property (nonatomic) IESECLLDCLynxManager manager;
- (id)initWithPendantInfo:lynxManager:;
- (void)setupWithPendantInfo:;
- (void)setContent:;
- (id)manager;
- (void)setManager:;
- (void).cxx_destruct;
+ (void)setupPendantFrame:pendantView:superView:;
@end
