@interface VCStrategyMedia : NSObject
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) NSDictionary mediInfo;
@property (nonatomic) NSMutableDictionary externalUrlItemDic;
@property (nonatomic) @? preloadEnd;
@property (nonatomic) @? preloadCanceled;
@property (nonatomic) @? preloadDidStart;
@property (nonatomic) @? preloadProgress;
@property (nonatomic) @? preloadSelectBitrate;
- (id)preloadCanceled;
- (id)preloadDidStart;
- (id)preloadProgress;
- (void)appendExternalResource:withType:;
- (id)externalUrlItemDic;
- (id)initWithMediInfo:;
- (id)mediInfo;
- (id)preloadEnd;
- (id)preloadSelectBitrate;
- (void)setExternalUrlItemDic:;
- (void)setExtraInfo:;
- (void)setMediInfo:;
- (void)setPreloadCanceled:;
- (void)setPreloadDidStart:;
- (void)setPreloadEnd:;
- (void)setPreloadProgress:;
- (void)setPreloadSelectBitrate:;
- (void).cxx_destruct;
- (id)extraInfo;
@end
