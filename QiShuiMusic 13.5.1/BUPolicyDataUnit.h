@interface BUPolicyDataUnit : NSObject
@property (nonatomic) BUPersistence kv;
@property (nonatomic) EBAppLogDatabase db;
- (id)initWithName:iskv:;
- (BOOL)isTableExists:;
- (id)kv;
- (id)queryBySql:;
- (id)queryBySql:args:;
- (void)removeAllKV;
- (void)setKv:;
- (BOOL)updateBySql:;
- (BOOL)updateBySql:args:;
- (id)db;
- (void)setObject:forKey:;
- (void)close;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setDb:;
- (void)removeObjectForKey:;
- (void)trim;
@end
