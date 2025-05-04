@interface AWEEcomSearchTabGuideTrackManager : NSObject
@property (nonatomic) NSMutableArray trackCache;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) BOOL isReady;
- (void)sendEvent:params:;
- (id)commonParams;
- (void)setCommonParams:;
- (void)updateCommonParams:;
- (void)trackGuideHide:hideType:;
- (void)trackGuideReceive:;
- (void)trackGuideShowFail:failType:;
- (void)trackGuideShow:;
- (void)trackGuideClick:extraParams:;
- (void)setTrackCache:;
- (void)sendCachedTrack;
- (void)trackGuide:event:extraParams:;
- (void)sendEventIfReady:params:;
- (id)trackCache;
- (id)init;
- (BOOL)isReady;
- (void).cxx_destruct;
- (void)reset;
- (void)setIsReady:;
@end
