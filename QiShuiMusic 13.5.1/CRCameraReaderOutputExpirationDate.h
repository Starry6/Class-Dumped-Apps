@interface CRCameraReaderOutputExpirationDate : CRCameraReaderOutput
@property (nonatomic) NSNumber yearValue;
@property (nonatomic) NSNumber monthValue;
@property (nonatomic) NSNumber dayValue;
- (id)monthValue;
- (id)yearValue;
- (id)dayValue;
@end
