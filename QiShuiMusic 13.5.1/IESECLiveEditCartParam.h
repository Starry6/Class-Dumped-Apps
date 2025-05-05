@interface IESECLiveEditCartParam : MTLModel
@property (nonatomic) NSString path;
@property (nonatomic) NSString requestParam;
@property (nonatomic) NSString firstSkuID;
@property (nonatomic) NSString trackExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)firstSkuID;
- (id)requestParam;
- (void)setFirstSkuID:;
- (void)setRequestParam:;
- (void)setTrackExtra:;
- (id)trackExtra;
- (id)path;
- (void)setPath:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
