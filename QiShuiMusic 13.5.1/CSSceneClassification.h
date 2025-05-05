@interface CSSceneClassification : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSArray synonyms;
@property (nonatomic) double confidence;
@property (nonatomic) I sceneIdentifier;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
- (double)confidence;
- (void)setConfidence:;
- (id)boundingBox;
- (void)encodeWithCSCoder:;
- (unsigned int)sceneIdentifier;
- (void)setLabel:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)setSceneIdentifier:;
- (id)synonyms;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (void)setSynonyms:;
- (id)copyWithZone:;
- (void)setBoundingBox:;
- (id)initWithLabel:synonyms:confidence:sceneIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
