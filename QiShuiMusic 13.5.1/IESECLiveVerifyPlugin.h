@interface IESECLiveVerifyPlugin : NSObject
@property (nonatomic) YYMemoryCache dataCache;
@property (nonatomic) NSString pageBtmID;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) IESECHybridParamsVerifyHelper verifyHelper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (id)buildJumpDestinationStr:;
- (void)cleanAllData;
- (id)consumedEventsSet;
- (void)destroyPlugin;
- (BOOL)dispatchInBackgroundThread;
- (id)getAllData;
- (id)initPluginWithLiveContext:;
- (id)initWithLiveContext:;
- (id)liveContext;
- (id)pageBtmID;
- (void)receive:;
- (void)setPageBtmID:;
- (void)setVerifyHelper:;
- (id)verifyHelper;
- (void).cxx_destruct;
- (id)dataCache;
- (void)setDataCache:;
@end
