@interface MLTransactionContext : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) Q priorityLevel;
@property (nonatomic) Q options;
@property (nonatomic) ML3DatabasePrivacyContext privacyContext;
- (id)path;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)privacyContext;
- (unsigned long long)priorityLevel;
- (id)initWithPrivacyContext:path:priorityLevel:options:;
+ (BOOL)supportsSecureCoding;
@end
