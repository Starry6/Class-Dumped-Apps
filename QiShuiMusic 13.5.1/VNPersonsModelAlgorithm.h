@interface VNPersonsModelAlgorithm : NSObject
@property (nonatomic) # faceModelClass;
- (Class)faceModelClass;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
