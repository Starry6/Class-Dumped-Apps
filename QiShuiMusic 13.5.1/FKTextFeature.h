@interface FKTextFeature : NSObject
@property (nonatomic) NSArray subFeatures;
@property (nonatomic) NSString text;
@property (nonatomic) float confidence;
@property (nonatomic) q featureID;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) NSArray corners;
@property (nonatomic) q type;
@property (nonatomic) NSArray candidates;
- (float)confidence;
- (void)setConfidence:;
- (id)boundingBox;
- (void)dealloc;
- (void)setText:;
- (id)candidates;
- (long long)type;
- (long long)featureID;
- (id)corners;
- (id)text;
- (id)subFeatures;
- (id)initWithType:boundingBox:corners:featureID:session:backingIndex:scale:;
- (void)setSubFeatures:;
+ (id)featureFromConcompIndex:session:scaling:type:createDiacriticFeatures:featureID:;
+ (id)featureFromSequenceIndex:session:scaling:createConcompFeatures:createDiacriticFeatures:featureID:;
@end
