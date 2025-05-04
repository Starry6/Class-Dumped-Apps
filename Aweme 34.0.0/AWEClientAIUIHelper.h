@interface AWEClientAIUIHelper : NSObject
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> hotFeedTabItemVC;
@property (nonatomic) UIViewController<AWEFeedTableViewControllerProtocol> hotFeedTableVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hotFeedTabItemVC;
- (id)hotFeedTableVC;
- (id)currentFeedTabItemVC;
- (id)currentFeedTableVC;
- (id)_getFeedTableVCWithTabItemVC:;
- (void)setHotFeedTabItemVC:;
- (void)setHotFeedTableVC:;
- (void).cxx_destruct;
+ (BOOL)shouldAsyncWaitMainQueue;
+ (long long)asyncWaitMainQueueTimeMs;
+ (void)executeOnMainQueueWithBlock:;
@end
