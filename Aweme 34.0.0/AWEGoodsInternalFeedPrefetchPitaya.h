@interface AWEGoodsInternalFeedPrefetchPitaya : NSObject
+ (void)registerPitayaMessageHandler;
+ (void)preLoadInnerDataWithAwemeID:playBackTime:;
+ (void)setPreLoadInfo:;
+ (id)preLoadInfo;
@end
