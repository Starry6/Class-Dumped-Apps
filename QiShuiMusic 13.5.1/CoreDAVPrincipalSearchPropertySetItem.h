@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem
@property (nonatomic) NSMutableSet principalSearchProperties;
- (id)init;
- (id)principalSearchProperties;
- (void).cxx_destruct;
- (id)description;
- (void)addPrincipalSearchProperty:;
- (void)setPrincipalSearchProperties:;
+ (id)copyParseRules;
@end
