@interface AWEPzQueryTool : NSObject
+ (id)queryJournalRecordWithModel:;
+ (id)queryComponentsWithScopes:excludedScopes:;
+ (id)queryComponentsWithEngine:scopes:excludedScopes:;
+ (id)queryComponentsWithEngine:scopes:;
+ (id)p_limitScopesFromScopes:componentID:;
+ (id)queryComponentsWithEngine:scope:;
+ (id)p_queryComponentsInEngine:scope:;
+ (id)queryComponentRecordWithModel:engine:;
@end
