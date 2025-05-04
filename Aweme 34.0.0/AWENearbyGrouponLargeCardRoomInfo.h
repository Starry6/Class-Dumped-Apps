@interface AWENearbyGrouponLargeCardRoomInfo : AWEBaseApiModel
@property (nonatomic) q style;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) AWENearbyGrouponLargeCardRoomProductInfo productInfo;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (id)productInfo;
- (long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
- (void)setProductInfo:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)productInfoJSONTransformer;
@end
