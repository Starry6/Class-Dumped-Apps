@interface TRINamespaceStatus : NSObject
@property (nonatomic) NSString namespaceName;
@property (nonatomic) I compatibilityVersion;
@property (nonatomic) NSDate lastFetchAttempt;
@property (nonatomic) BOOL lastFetchWasSuccess;
- (BOOL)isEqualToStatus:;
- (id)namespaceName;
- (id)init;
- (id)asData;
- (unsigned int)compatibilityVersion;
- (id)copyWithReplacementCompatibilityVersion:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)lastFetchWasSuccess;
- (id)initWithNamespaceName:compatibilityVersion:lastFetchAttempt:lastFetchWasSuccess:;
- (id)copyWithReplacementNamespaceName:;
- (id)copyWithReplacementLastFetchAttempt:;
- (id)copyWithReplacementLastFetchWasSuccess:;
- (id)lastFetchAttempt;
+ (BOOL)supportsSecureCoding;
+ (id)statusFromData:;
+ (id)statusWithNamespaceName:compatibilityVersion:lastFetchAttempt:lastFetchWasSuccess:;
@end
