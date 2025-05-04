@interface AWEMapPOIInfoModel : NSObject
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString poiBackendType;
@property (nonatomic) NSString poiAddress;
@property (nonatomic) NSString cityCode;
@property (nonatomic) NSNumber longitudeGCJ;
@property (nonatomic) NSNumber latitudeGCJ;
@property (nonatomic) BOOL isLocal;
- (id)poiID;
- (id)poiBackendType;
- (id)poiName;
- (void)setPoiBackendType:;
- (id)poiAddress;
- (void)setPoiAddress:;
- (void)setPoiName:;
- (void)setPoiID:;
- (id)latitudeGCJ;
- (void)setLatitudeGCJ:;
- (id)longitudeGCJ;
- (void)setLongitudeGCJ:;
- (void).cxx_destruct;
- (void)setIsLocal:;
- (BOOL)isLocal;
- (id)cityCode;
- (void)setCityCode:;
@end
