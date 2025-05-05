@interface VNRecognizeDocumentElementsRequestElementConfiguration : NSObject
@property (nonatomic) BOOL recognize;
@property (nonatomic) BOOL generateSegmentationMask;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)recognize;
- (void)setRecognize:;
- (BOOL)generateSegmentationMask;
- (void)setGenerateSegmentationMask:;
+ (id)newConfiguration;
@end
