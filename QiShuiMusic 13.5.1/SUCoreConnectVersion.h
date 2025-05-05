@interface SUCoreConnectVersion : NSObject
@property (nonatomic) NSString selectorString;
- (id)initWithString:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSelector:;
- (id)selectorString;
+ (BOOL)supportsSecureCoding;
@end
