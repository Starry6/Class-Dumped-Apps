@interface BDTrackBaseBatchRequest : NSObject
+ (unsigned int)handleBatchSendCallback:track:index:priority:;
+ (unsigned int)sendTracks:index:priority:;
+ (unsigned int)sendTracks:priority:;
+ (id)urlWithIndex:;
@end
