@interface AWEPostPagePOIPassThroughModel : NSObject
@property (nonatomic) NSDictionary poiInfo;
@property (nonatomic) NSDictionary productInfo;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (id)poiInfo;
- (void)setTrackParams:;
- (void)setPoiInfo:;
- (id)productInfo;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setProductInfo:;
@end
