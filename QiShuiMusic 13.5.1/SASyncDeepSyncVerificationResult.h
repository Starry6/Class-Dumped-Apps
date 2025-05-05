@interface SASyncDeepSyncVerificationResult : SABaseCommand
@property (nonatomic) NSString key;
@property (nonatomic) NSString result;
@property (nonatomic) NSString text;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)groupIdentifier;
- (void)setText:;
- (id)key;
- (BOOL)requiresResponse;
- (void)setKey:;
- (id)encodedClassName;
- (id)text;
- (void)setResult:;
+ (id)deepSyncVerificationResult;
+ (id)deepSyncVerificationResultWithDictionary:context:;
@end
