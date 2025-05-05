@interface SASetClientState : SABaseCommand
@property (nonatomic) NSArray statesToSet;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)statesToSet;
- (void)setStatesToSet:;
+ (id)setClientState;
+ (id)setClientStateWithDictionary:context:;
@end
