@interface AWEOpenAuthInfoScopeDataV4 : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL containsInvalidScope;
@property (nonatomic) NSDictionary scopeInfoMap;
@property (nonatomic) NSArray authorizedScopes;
@property (nonatomic) NSString cancelScopeNotice;
@property (nonatomic) NSDictionary textMap;
- (id)textMap;
- (void)setTextMap:;
- (BOOL)containsInvalidScope;
- (void)setContainsInvalidScope:;
- (id)scopeInfoMap;
- (void)setScopeInfoMap:;
- (id)cancelScopeNotice;
- (void)setCancelScopeNotice:;
- (void).cxx_destruct;
- (id)authorizedScopes;
- (void)setAuthorizedScopes:;
+ (id)JSONKeyPathsByPropertyKey;
@end
