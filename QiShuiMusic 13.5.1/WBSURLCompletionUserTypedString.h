@interface WBSURLCompletionUserTypedString : NSObject
@property (nonatomic) NSString normalizedString;
- (id)init;
- (void)dealloc;
- (id)initWithString:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)normalizedString;
+ (BOOL)supportsSecureCoding;
@end
