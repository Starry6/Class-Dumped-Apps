@interface GEOMapItemTip : NSObject
@property (nonatomic) GEOPDTip geoTip;
@property (nonatomic) BOOL hasTipTime;
@property (nonatomic) double tipTime;
@property (nonatomic) NSString name;
@property (nonatomic) NSString localizedSnippet;
@property (nonatomic) NSString bestImageURL;
@property (nonatomic) BOOL hasTipId;
@property (nonatomic) NSString tipId;
- (void).cxx_destruct;
- (id)name;
- (id)initWithGEOPDTip:;
- (id)localizedSnippet;
- (BOOL)hasTipTime;
- (double)tipTime;
- (id)bestImageURL;
- (BOOL)hasTipId;
- (id)tipId;
- (id)geoTip;
- (void)setGeoTip:;
@end
