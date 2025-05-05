@interface LNProperty : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) LNValue value;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithIdentifier:value:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
