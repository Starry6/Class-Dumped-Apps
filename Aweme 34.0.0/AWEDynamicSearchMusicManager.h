@interface AWEDynamicSearchMusicManager : NSObject
@property (nonatomic) AWEASMusicHistorySuggestionManager dataManager;
@property (nonatomic) <AWEDynamicSearchMusicManagerDelegate> delegate;
- (void)sendReloadEventWithParams:;
- (void)sendStopMusicEventWithParams:;
- (void)fetchAllHistoryWithCompletion:;
- (void)saveHistory:withEnterMethod:needNotifyReload:;
- (void)deleteAllHistoryWithEnterMethod:needNotifyReload:;
- (void)deleteHistory:withEnterMethod:needNotifyReload:;
- (id)init;
- (id)dataManager;
- (id)delegate;
- (void)setDataManager:;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedManager;
@end
