@interface SAAIStartSession : SABaseCommand
@property (nonatomic) NSString acousticIdSessionId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)acousticIdSessionId;
- (void)setAcousticIdSessionId:;
+ (id)startSession;
+ (id)startSessionWithDictionary:context:;
@end
