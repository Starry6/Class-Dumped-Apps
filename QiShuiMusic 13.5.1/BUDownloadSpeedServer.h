@interface BUDownloadSpeedServer : NSObject
@property (nonatomic) NSMutableArray speeds;
@property (nonatomic) NSMutableDictionary modelCache;
- (id)downloadSpeedServerCreateSpeedModelWithUrl:;
- (double)downloadSpeeds;
- (id)downloadingWithUrl:;
- (void)finishDownloadWithUrl:;
- (id)getSpeedModelWithUrl:;
- (void)setModelCache:;
- (void)startDownloadWithUrl:;
- (id)init;
- (void)setSpeeds:;
- (void).cxx_destruct;
- (id)modelCache;
- (id)speeds;
+ (id)server;
@end
