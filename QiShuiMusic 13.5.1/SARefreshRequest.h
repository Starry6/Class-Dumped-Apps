@interface SARefreshRequest : SAStartRequest
@property (nonatomic) NSData nlResultState;
@property (nonatomic) NSData serializedIntent;
@property (nonatomic) NSString source;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)source;
- (void)setSource:;
- (id)nlResultState;
- (void)setNlResultState:;
- (id)serializedIntent;
- (void)setSerializedIntent:;
+ (id)refreshRequest;
+ (id)refreshRequestWithDictionary:context:;
@end
