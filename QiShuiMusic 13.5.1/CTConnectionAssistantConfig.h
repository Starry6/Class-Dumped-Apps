@interface CTConnectionAssistantConfig : NSObject
@property (nonatomic) CTCAModelVector modelVector;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)modelVector;
- (void)setModelVector:;
+ (BOOL)supportsSecureCoding;
@end
