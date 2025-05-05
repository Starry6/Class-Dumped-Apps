@interface IESECActionPathTrackerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)actionPathEnd:;
- (void)actionPathStart:;
- (id)createNewActionPath;
- (void)dispatchNode:;
- (void)dispatchNode:pathID:;
- (id)getActionPath:;
- (id)getActionPathIDs;
- (id)getPluginWithClass:;
- (id)init_private;
- (id)packedPathIDs;
- (void)record:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)registerPlugin:;
+ (BOOL)shouldCreateNewActionPathWithBtmID:sourceBTMToken:;
+ (id)allocWithZone:;
+ (id)shared;
@end
