@interface SACreateSessionInfoResponse : SABaseClientBoundCommand
@property (nonatomic) NSData sessionInfo;
@property (nonatomic) NSNumber validityDuration;
- (id)sessionInfo;
- (id)groupIdentifier;
- (void)setSessionInfo:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)validityDuration;
- (void)setValidityDuration:;
+ (id)createSessionInfoResponse;
+ (id)createSessionInfoResponseWithDictionary:context:;
@end
