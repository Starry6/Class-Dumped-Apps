@interface SASetMultipleClientStates : SABaseCommand
@property (nonatomic) NSArray clientStateSetters;
@property (nonatomic) NSArray failedGetters;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)clientStateSetters;
- (void)setClientStateSetters:;
- (id)failedGetters;
- (void)setFailedGetters:;
+ (id)setMultipleClientStates;
+ (id)setMultipleClientStatesWithDictionary:context:;
@end
