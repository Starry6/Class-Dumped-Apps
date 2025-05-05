@interface SARollbackRequest : SABaseCommand
@property (nonatomic) NSString reason;
@property (nonatomic) NSString requestId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)requestId;
- (id)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
- (void)setRequestId:;
+ (id)rollbackRequest;
+ (id)rollbackRequestWithDictionary:context:;
@end
