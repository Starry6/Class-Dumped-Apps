@interface SALocalSearchSetGeoClientState : SABaseCommand
@property (nonatomic) SALocalSearchGeoClientState clientState;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)clientState;
- (id)encodedClassName;
- (void)setClientState:;
+ (id)setGeoClientState;
+ (id)setGeoClientStateWithDictionary:context:;
@end
