@interface IESECGoodsDetailPageViewProvider : NSObject
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) UIView<IESECGoodsDetailHeadProtocol> headerContainerView;
@property (nonatomic) NSDictionary headerModel;
@property (nonatomic) q currentContainerMode;
@property (nonatomic) IESECGoodsDetailPageContext pageContext;
@property (nonatomic) IESECGoodsDetailSliceManager sliceManager;
@property (nonatomic) IESECGoodsDetailShowRequest showReqeust;
- (void)setShowReqeust:;
- (long long)currentContainerMode;
- (id)initWithPageIdentifier:;
- (void)setCurrentContainerMode:;
- (void)setSliceManager:;
- (id)showReqeust;
- (id)sliceManager;
- (void).cxx_destruct;
- (id)headerContainerView;
- (void)setHeaderContainerView:;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
- (id)pageContext;
- (void)setPageContext:;
- (void)setHeaderModel:;
- (id)headerModel;
@end
