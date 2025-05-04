@interface AWEECommerceGoodsCardDataController : NSObject
@property (nonatomic) NSCache awemeGoodsMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeGoodsMap;
- (void)fetchGoodsCardDataWithAwemeModelList:completion:;
- (void)fetchGoodsCardDataWithParameters:completion:;
- (void)fetchGoodsCardDataWithAwemeModel:completion:;
- (void)setAwemeGoodsMap:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
