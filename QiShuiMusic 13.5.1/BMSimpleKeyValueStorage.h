@interface BMSimpleKeyValueStorage : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSURL url;
@property (nonatomic) BMFileManager fileManager;
- (id)fileManager;
- (id)url;
- (id)initWithURL:;
- (void).cxx_destruct;
- (id)queue;
- (void)deleteValueForKey:;
- (void)insertValue:forKey:;
- (id)fetchValueForKey:;
- (void)_insertValue:forKey:;
- (id)_fetchValueForKey:;
- (void)_deleteValueForKey:;
- (id)readDictionary;
- (void)storeDictionary:;
@end
