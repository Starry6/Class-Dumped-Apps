@interface AWEPOIAlbumVideoParamModel : NSObject
@property (nonatomic) NSString poiEnterID;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiBackendType;
@property (nonatomic) NSString topItemID;
@property (nonatomic) NSDictionary mobParams;
- (id)poiID;
- (id)poiBackendType;
- (void)setPoiBackendType:;
- (void)setPoiID:;
- (id)mobParams;
- (void)setMobParams:;
- (id)poiEnterID;
- (void)setPoiEnterID:;
- (void)setTopItemID:;
- (id)topItemID;
- (void).cxx_destruct;
@end
