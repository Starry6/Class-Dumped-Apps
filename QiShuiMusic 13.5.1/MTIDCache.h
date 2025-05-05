@interface MTIDCache : NSObject
@property (nonatomic) NSMutableDictionary cache;
- (id)init;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
- (void)removeNamespace:;
- (id)IDInfoForScheme:dsId:date:;
- (void)addIDInfo:;
- (void)removeNamespaces:;
- (void)removeAllNamespaces;
- (void)removeUnsyncedNamespaces;
+ (BOOL)idInfo:isValidForDate:;
@end
