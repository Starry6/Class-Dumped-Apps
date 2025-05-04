@interface AWERequestDegrader : NSObject
@property (nonatomic) BOOL requestLivePresentListOnColdLaunch;
@property (nonatomic) BOOL requestPreloadRoomOnColdLaunch;
@property (nonatomic) BOOL requestHotRoomCountOnColdLaunch;
@property (nonatomic) BOOL requestStoryListOnColdLaunch;
@property (nonatomic) BOOL requestFeedOnColdLaunch;
- (void)setRequestLivePresentListOnColdLaunch:;
- (BOOL)requestFeedOnColdLaunch;
- (void)setRequestFeedOnColdLaunch:;
- (BOOL)requestLivePresentListOnColdLaunch;
- (BOOL)requestPreloadRoomOnColdLaunch;
- (void)setRequestPreloadRoomOnColdLaunch:;
- (BOOL)requestHotRoomCountOnColdLaunch;
- (void)setRequestHotRoomCountOnColdLaunch:;
- (BOOL)requestStoryListOnColdLaunch;
- (void)setRequestStoryListOnColdLaunch:;
- (id)init;
+ (id)sharedInstance;
@end
