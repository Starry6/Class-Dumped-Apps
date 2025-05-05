@interface IESGurdChannelDatasManager : NSObject
@property (nonatomic) NSMutableDictionary datas;
@property (nonatomic) NSLock innerLock;
@property (nonatomic) NSMutableDictionary datasDirty;
- (void)clearExtraIfNeeded:channel:;
- (id)datasDirty;
- (id)getDataWithInit:channel:;
- (id)getExtra:channel:;
- (id)innerLock;
- (void)readCache:;
- (void)setDatasDirty:;
- (void)setInnerLock:;
- (void)updateExtra:channel:data:;
- (void)writeCache;
- (void)writeCacheWithoutLock:;
- (void)setup;
- (void).cxx_destruct;
- (void)writeCache:;
- (id)datas;
- (void)setDatas:;
+ (id)sharedManager;
@end
