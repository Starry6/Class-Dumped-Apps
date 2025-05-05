@interface VNTextObservation : VNRectangleObservation
@property (nonatomic) NSArray characterBoxes;
@property (nonatomic) NSString text;
- (void)setText:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)text;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)characterBoxes;
- (void)setCharacterBoxes:;
+ (BOOL)supportsSecureCoding;
@end
