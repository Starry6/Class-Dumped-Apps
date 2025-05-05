@interface PLLocalVideoKeyFrameJobQueue : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)removeJob:;
- (BOOL)addJobWithAssetObjectID:networkAccessAllowed:libraryID:error:completionHandler:;
- (id)popNextJobToRun;
@end
