@interface VIStreamingSignalExtractionResult : NSObject
@property (nonatomic) VIImageRegion imageRegion;
@property (nonatomic) NSData payload;
- (id)payload;
- (void).cxx_destruct;
- (id)initWithImageRegion:payload:;
- (id)imageRegion;
@end
