@interface IESECGoodsDetailCartMetaModel : MTLModel
@property (nonatomic) NSString cartUrl;
@property (nonatomic) q cartNum;
@property (nonatomic) NSString trackParams;
@property (nonatomic) BOOL isMarked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (long long)cartNum;
- (id)cartUrl;
- (BOOL)isMarked;
- (void)setCartNum:;
- (void)setCartUrl:;
- (void)setIsMarked:;
- (id)trackParams;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
