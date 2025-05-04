@interface AWESolariaPortraitProducerImpl : IESPortraitProducer
@property (nonatomic) NSDictionary portraits;
@property (nonatomic) <AWEStorageServiceKVInterface> portraitStorage;
@property (nonatomic) NSLock lock;
@property (nonatomic) NSLock storageLock;
@property (nonatomic) BOOL hasLoadData;
- (void)doSetup;
- (BOOL)containsKey:inTypes:;
- (id)getPortraitElement:inTypes:params:;
- (id)getPortraitElements;
- (id)portraits;
- (void)setPortraits:;
- (id)processSolariaServerPortraits:;
- (id)portraitStorage;
- (id)unpackData:success:;
- (id)getPortraitsFromData:isEncode:success:;
- (void)saveData:isEncode:dataCount:;
- (void)setPortraitStorage:;
- (void)setStorageLock:;
- (BOOL)hasLoadData;
- (void)setHasLoadData:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (id)storageLock;
+ (id)sharedInstance;
@end
