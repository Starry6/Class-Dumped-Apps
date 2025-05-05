@interface GEORPLegacyProblemRequester : NSObject
- (void)cancelRequest:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startSubmissionRequest:finished:networkActivity:error:;
- (void)startStatusRequest:finished:networkActivity:error:;
+ (id)sharedRequester;
@end
