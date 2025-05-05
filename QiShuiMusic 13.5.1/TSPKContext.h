@interface TSPKContext : NSObject
@property (nonatomic) NSMutableDictionary dict;
- (id)contextSymbolsForApiType:;
- (void)setContextBlock:forApiType:;
- (id)init;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
@end
