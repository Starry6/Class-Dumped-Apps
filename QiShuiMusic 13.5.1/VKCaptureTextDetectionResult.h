@interface VKCaptureTextDetectionResult : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} _imageBounds;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) VKQuad boundingQuad;
@property (nonatomic) NSArray lineQuads;
@property (nonatomic) NSArray blockQuads;
@property (nonatomic) NSArray normalizedLineQuads;
@property (nonatomic) double baselineAngle;
- (id)boundingBox;
- (void).cxx_destruct;
- (id)_imageBounds;
- (id)boundingQuad;
- (double)baselineAngle;
- (id)initWithBlock:imageSize:;
- (id)initWithBlocks:imageSize:;
- (id)groupedPath;
- (id)boundingPathWithPadding:cornerRadius:;
- (id)groupedPathForLinesWithPadding:cornerRadius:;
- (id)lineQuads;
- (id)blockQuads;
- (id)normalizedLineQuads;
@end
