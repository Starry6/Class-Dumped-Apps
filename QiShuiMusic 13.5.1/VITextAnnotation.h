@interface VITextAnnotation : NSObject
@property (nonatomic) NSString description;
@property (nonatomic) NSString text;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) float confidence;
- (float)confidence;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)normalizedBoundingBox;
- (id)initWithText:normalizedBoundingBox:confidence:;
@end
