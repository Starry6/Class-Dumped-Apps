@interface AWEPOIAlbumLynxParamModel : NSObject
@property (nonatomic) NSString poiEnterID;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiBackendType;
@property (nonatomic) NSDictionary mobParams;
@property (nonatomic) NSString contentSchema;
- (id)poiID;
- (id)poiBackendType;
- (void)setPoiBackendType:;
- (void)setPoiID:;
- (id)mobParams;
- (void)setMobParams:;
- (id)poiEnterID;
- (void)setPoiEnterID:;
- (id)contentSchema;
- (void)setContentSchema:;
- (void).cxx_destruct;
@end
