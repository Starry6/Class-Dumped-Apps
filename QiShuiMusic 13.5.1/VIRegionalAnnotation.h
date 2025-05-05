@interface VIRegionalAnnotation : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) float confidence;
- (float)confidence;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithLabel:normalizedBoundingBox:confidence:;
- (id)normalizedBoundingBox;
@end
