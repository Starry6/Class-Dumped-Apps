@interface BDUGLuckyScreenShotXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSDictionary rawData;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q timeOut;
@property (nonatomic) NSString filename;
@property (nonatomic) NSNumber saveToAlbum;
- (void)setSaveToAlbum:;
- (id)saveToAlbum;
- (id)filename;
- (id)schema;
- (void)setRawData:;
- (void)setWidth:;
- (void)setFilename:;
- (void)setSchema:;
- (long long)height;
- (long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)rawData;
- (void)setTimeOut:;
- (long long)timeOut;
+ (id)JSONKeyPathsByPropertyKey;
@end
