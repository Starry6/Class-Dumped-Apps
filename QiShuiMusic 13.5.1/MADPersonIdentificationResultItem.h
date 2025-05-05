@interface MADPersonIdentificationResultItem : NSObject
@property (nonatomic) NSString personIdentifier;
@property (nonatomic) NSString personName;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)boundingBox;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)personName;
- (id)personIdentifier;
- (id)initWithPersonIdentifier:personName:boundingBox:andConfidence:;
+ (BOOL)supportsSecureCoding;
@end
