@interface AWEUIReplayTrackManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> syncQueue;
- (id)getDescriptionForUI:;
- (id)getViewControllerNode:withDetail:;
- (void)recordViewHierarchyWithWindow:;
- (void)uploadAllViewHierarchyInfoWithExtraData:;
- (void)recordViewHierarchyWithWindow:upload:uploadExtraData:;
- (id)feedbackTypeWithType:;
- (void)uploadViewHierarchyInfoWithTimeStamp:jumpMatch:extraData:;
- (BOOL)isHit:fileCreateTime:;
- (void)uploadReplayInfo:extraData:fileName:;
- (id)getViewHierarchy:superView:superVC:withDetail:withAccessibility:targetView:;
- (void)recordViewHierarchy:recordTime:;
- (void)uploadViewHierarchyInfoWithTimeStamp:extraData:;
- (id)zipFile:filePath:;
- (id)getViewNode:withDetail:withAccessibility:targetView:;
- (id)getUIKitInfoWithView:;
- (id)getAccessibilityInfoWithView:;
- (id)syncQueue;
- (id)init;
- (void)setSyncQueue:;
- (void).cxx_destruct;
- (id)uploadURL;
- (id)toJsonString:;
+ (void)initPath;
+ (id)replayRootPath;
+ (id)sharedInstance;
@end
