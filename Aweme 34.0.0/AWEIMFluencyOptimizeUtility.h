@interface AWEIMFluencyOptimizeUtility : NSObject
+ (BOOL)enableFluencyOptDemoteTime;
+ (BOOL)enableFluencyOptV2;
+ (BOOL)enableFluencyOptChatDiff;
+ (BOOL)enableFluencyOptReduceKVO;
+ (BOOL)enableConFPSOpt;
+ (BOOL)enableConProtocolCache;
+ (BOOL)enableMessageAsyncLayout;
+ (BOOL)enableTrackCompPerf;
+ (BOOL)enableFluencyOpt;
+ (void)trackPerfMetricsScene:cost:compClass:invocationSelector:extraParam:;
+ (BOOL)enableTrackCellPerf;
+ (void)trackPerfCellWithScene:cost:extra:;
+ (BOOL)enableTextAsyncRender;
+ (id)messageAsyncLayoutBlackList;
+ (BOOL)enableFluencyOptQuickPhoto;
+ (BOOL)enableFluencyOptFansTag;
+ (BOOL)enableFluencyOptCommunicationRequest;
+ (BOOL)enableFluencyOptMsgObserver;
+ (id)disableUserMergePropertyArray;
+ (id)p_fluencyOptDict;
+ (BOOL)enableFluencyOptUser;
+ (id)p_syncGetIMFluencyOptV2;
+ (id)fpsTrackConfig;
+ (BOOL)enableFluencyOptPeerAB;
+ (BOOL)enableFluencyOptAsyncGetUser;
@end
