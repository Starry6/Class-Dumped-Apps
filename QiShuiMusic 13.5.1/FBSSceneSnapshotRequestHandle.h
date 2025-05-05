@interface FBSSceneSnapshotRequestHandle : NSObject
- (void)_clearAction;
- (void)performRequestForScene:;
- (void)cancelRequest;
- (void).cxx_destruct;
- (id)initWithRequestType:context:;
+ (id)handleForRequestType:context:;
@end
