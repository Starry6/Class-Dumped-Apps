@interface CTCAModelVector : NSObject
@property (nonatomic) CTCATargetVector defaultVector;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)defaultVector;
- (void)setDefaultVector:;
+ (BOOL)supportsSecureCoding;
@end
