@interface AWEShowPlayletCollectTaskDataService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)fetchPlayletWidgetDesktopFloatTipsInfoWithCompletion:;
+ (void)fetchPlayletTaskRewardInfoWithTaskId:completion:;
+ (void)fetchPlayletWidgetInstalledRewardInfoWithTaskId:completion:;
+ (void)fetchPlayletWidgetDesktopRewardInfoWithTaskId:completion:;
@end
