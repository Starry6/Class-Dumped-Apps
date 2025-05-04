@interface AWEIMExchangeAnswerResource : NSObject
@property (nonatomic) AWEIMExchangeAnswerStrategyConfig strategyConfig;
@property (nonatomic) BOOL downloadFailed;
@property (nonatomic) AWEIMMD5ResourceUpdater updater;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategyConfig;
- (void)fetchDataIfNeeded;
- (void)setStrategyConfig:;
- (void)p_fetchData;
- (void)p_tryToLoadResource;
- (void)p_asyncOnGlobalConcurrentQueueWithBlock:;
- (void)p_loadDataWithFilePath:;
- (void)setDownloadFailed:;
- (id)updater;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (void)setUpdater:;
- (BOOL)downloadFailed;
@end
