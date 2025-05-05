@interface CPEntity : NSObject
@property (nonatomic) NSUUID identifier;
- (id)identifier;
- (id)initWithCoder:;
- (id)objectForIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
+ (BOOL)supportsSecureCoding;
@end
