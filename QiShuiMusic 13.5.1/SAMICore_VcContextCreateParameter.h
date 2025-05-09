@interface SAMICore_VcContextCreateParameter : NSObject
@property (nonatomic) r* url;
@property (nonatomic) r* header;
@property (nonatomic) r* appKey;
@property (nonatomic) NSInteger connectTimeout;
@property (nonatomic) q tokenType;
@property (nonatomic) r* token;
@property (nonatomic) q timestamp;
@property (nonatomic) NSInteger maxBlockSize;
@property (nonatomic) BOOL enableAudioCache;
@property (nonatomic) NSInteger audioCacheSize;
@property (nonatomic) r* saveFileDir;
@property (nonatomic) <SAMICoreCallbackListener> listener;
- (void)setSaveFileDir:;
- (id)appKey;
- (int)audioCacheSize;
- (BOOL)enableAudioCache;
- (int)maxBlockSize;
- (id)saveFileDir;
- (void)setAppKey:;
- (void)setAudioCacheSize:;
- (void)setEnableAudioCache:;
- (void)setMaxBlockSize:;
- (void)setHeader:;
- (id)url;
- (id)token;
- (id)listener;
- (void)setUrl:;
- (void)setTokenType:;
- (void)setToken:;
- (void)setTimestamp:;
- (long long)timestamp;
- (id)header;
- (void)setListener:;
- (long long)tokenType;
- (int)connectTimeout;
- (void)setConnectTimeout:;
@end
