@interface PHSceneClassification : NSObject
@property (nonatomic) q packedBoundingBoxRect;
@property (nonatomic) I sceneIdentifier;
@property (nonatomic) double confidence;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
- (double)confidence;
- (id)boundingBox;
- (long long)packedBoundingBoxRect;
- (id)initWithSceneIdentifier:confidence:;
- (unsigned int)sceneIdentifier;
- (void)setPackedBoundingBoxRect:;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)initWithSceneIdentifier:confidence:boundingBox:;
- (BOOL)isEqualToSceneClassification:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:;
@end
