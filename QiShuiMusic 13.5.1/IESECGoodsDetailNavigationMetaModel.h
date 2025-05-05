@interface IESECGoodsDetailNavigationMetaModel : MTLModel
@property (nonatomic) NSDictionary collectParams;
@property (nonatomic) NSDictionary shareParams;
@property (nonatomic) NSDictionary reportParams;
@property (nonatomic) IESECGoodsDetailNavigationMoreMetaModel moreParams;
@property (nonatomic) NSDictionary consult;
@property (nonatomic) NSDictionary mallParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShareParams:;
- (id)consult;
- (id)collectParams;
- (id)mallParams;
- (id)moreParams;
- (id)reportParams;
- (void)setCollectParams:;
- (void)setConsult:;
- (void)setMallParams:;
- (void)setMoreParams:;
- (void)setReportParams:;
- (id)shareParams;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
