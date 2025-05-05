@interface SAGetSingleClientStateFailed : SABaseCommand
@property (nonatomic) q errorCode;
@property (nonatomic) NSString reason;
@property (nonatomic) SAAceClientState attemptedClientState;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)initWithReason:;
- (long long)errorCode;
- (id)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)initWithErrorCode:;
- (id)attemptedClientState;
- (void)setAttemptedClientState:;
+ (id)getSingleClientStateFailed;
+ (id)getSingleClientStateFailedWithDictionary:context:;
+ (id)getSingleClientStateFailedWithErrorCode:;
+ (id)getSingleClientStateFailedWithReason:;
@end
