@interface VKVideoTextRecognizerItem : NSObject
@property (nonatomic) NSUUID uuid;
@property (nonatomic) VKQuad originalBoundingQuad;
@property (nonatomic) VKQuad boundingQuad;
@property (nonatomic) NSArray originalPoints;
@property (nonatomic) NSArray points;
@property (nonatomic) NSString string;
@property (nonatomic) {?=[3]} warpTransform;
- (id)string;
- (id)init;
- (id)uuid;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)points;
- (void)setPoints:;
- (id)boundingQuad;
- (id)warpTransform;
- (void)setWarpTransform:;
- (void)didRecognizeString:;
- (id)pointsToDictionaryRepresentation:;
- (id)matrix3x3TransformToDictionaryRepresentation:;
- (id)originalBoundingQuad;
- (void)setOriginalBoundingQuad:;
- (void)setBoundingQuad:;
- (id)originalPoints;
- (void)setOriginalPoints:;
@end
