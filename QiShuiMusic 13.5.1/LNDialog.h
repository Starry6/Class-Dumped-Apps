@interface LNDialog : NSObject
@property (nonatomic) NSString localeIdentifier;
- (void)getResultWithCompletionHandler:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithLocaleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)localeIdentifier;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
