@interface AWEOpenAuthInfoDetail : MTLModel
@property (nonatomic) AWEOpenAuthInfoClientInfo clientInfo;
@property (nonatomic) AWEOpenAuthInfoAlertScope alertScope;
@property (nonatomic) NSDictionary scopeMap;
@property (nonatomic) NSDictionary textMap;
@property (nonatomic) NSDictionary identityScopeState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textMap;
- (void)setTextMap:;
- (id)alertScope;
- (void)setAlertScope:;
- (id)scopeMap;
- (void)setScopeMap:;
- (id)identityScopeState;
- (void)setIdentityScopeState:;
- (id)clientInfo;
- (void)setClientInfo:;
- (void).cxx_destruct;
+ (id)clientInfoJSONTransformer;
+ (id)alertScopeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
