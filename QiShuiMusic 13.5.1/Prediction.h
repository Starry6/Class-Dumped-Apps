@interface Prediction : NSObject
@property (nonatomic) Q uiClass;
@property (nonatomic) double confidence;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) NSString label;
- (double)confidence;
- (void)setConfidence:;
- (id)boundingBox;
- (void)setLabel:;
- (id)label;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)setBoundingBox:;
- (unsigned long long)uiClass;
- (void)setUiClass:;
@end
