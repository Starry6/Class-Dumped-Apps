@interface SACommandFailed : SABaseClientBoundCommand
@property (nonatomic) q errorCode;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString turnId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString appId;
@property (nonatomic) NSArray callbacks;
- (id)groupIdentifier;
- (id)initWithReason:;
- (long long)errorCode;
- (id)reason;
- (BOOL)requiresResponse;
- (void)setReason:;
- (id)encodedClassName;
- (void)setErrorCode:;
- (id)initWithErrorCode:;
- (id)turnId;
- (void)setTurnId:;
+ (id)commandFailed;
+ (id)commandFailedWithDictionary:context:;
+ (id)commandFailedWithErrorCode:;
+ (id)commandFailedWithReason:;
@end
