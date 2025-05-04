@interface AWEPublishInfiniTaskTracker : NSObject
+ (void)p_mergePublishParams:toDict:;
+ (id)paramsForPublishFinishWithAweme:publishViewModel:;
+ (void)trackLifePublishWithParams:;
+ (void)trackPublishAppState:state:status:currentStage:;
+ (void)trackPublishFailSaveDraft:success:draftError:;
+ (void)trackSingleVideoPublishDone:;
+ (void)trackImageAlbumStylePublishDone:;
+ (void)trackPrePublish:sucess:;
+ (id)p_aweme:;
+ (id)remoteVideoPublishTrackParams:;
+ (void)p_uploadLocalLifePublishFinish:;
+ (id)p_getMultiplePoiListFromPOIListArray:;
@end
