@interface BUPolicyDataCenter : NSObject
@property (nonatomic) NSMutableDictionary kvDict;
@property (nonatomic) NSMutableDictionary dbDict;
@property (nonatomic) NSMapTable dataProviderMap;
- (id)dataProviderMap;
- (void)close:isKv:;
- (id)dataProviderForIdentifier:;
- (id)dataUnitWithName:isKV:;
- (id)dataWithId:func:params:;
- (id)dbDict;
- (id)kvDict;
- (void)registDataProvider:identifier:;
- (void)setDataProviderMap:;
- (void)setDbDict:;
- (void)setKvDict:;
- (void)setup;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
