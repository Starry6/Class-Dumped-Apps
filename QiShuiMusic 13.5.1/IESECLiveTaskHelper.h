@interface IESECLiveTaskHelper : NSObject
@property (nonatomic) NSMapTable taskBannersMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)adjustTaskViewFrame:withSize:inContainer:;
- (void)setTaskBannersMap:;
- (id)taskBannersMap;
- (void)viewDidChangeIntrinsicContentSize:withContainerID:;
- (void).cxx_destruct;
+ (void)getTaskBannerWithModel:completion:;
+ (void)handleTaskIfNeeded:roomID:logExtra:isFirstIn:openWithSaaS:;
+ (id)keyWithTaskEnterFrom:taskType:;
+ (BOOL)removeTaskBannerWithContainerID:;
+ (id)sharedInstance;
@end
