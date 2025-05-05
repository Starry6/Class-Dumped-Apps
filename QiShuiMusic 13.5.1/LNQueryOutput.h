@interface LNQueryOutput : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) LNValue value;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithIdentifier:value:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
