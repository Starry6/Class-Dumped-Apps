@interface ISTypeIcon : ISBindableIcon
@property (nonatomic) NSString type;
- (id)initWithCoder:;
- (id)symbol;
- (void)encodeWithCoder:;
- (id)type;
- (id)makeResourceProvider;
- (id)_fallbackKey;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:;
+ (BOOL)supportsSecureCoding;
@end
