@interface IESECLiveKVStorage : NSObject
@property (nonatomic) NSMutableDictionary storage;
- (void)setObject:forKey:;
- (void)setStorage:;
- (id)stringValueForKey:;
- (id)storage;
- (void).cxx_destruct;
- (BOOL)boolValueForKey:;
- (id)dictionaryValueForKey:;
@end
