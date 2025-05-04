@interface AWEVisionScanHistoryModel : AWEBaseApiModel
@property (nonatomic) NSString scanID;
@property (nonatomic) NSNumber itemTimestamp;
@property (nonatomic) NSString srcImage;
@property (nonatomic) NSString tosURI;
- (id)srcImage;
- (void)setSrcImage:;
- (id)scanID;
- (id)itemTimestamp;
- (void)setItemTimestamp:;
- (void)setTosURI:;
- (void)setScanID:;
- (id)tosURI;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
