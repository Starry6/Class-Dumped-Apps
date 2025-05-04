@interface AWEOfflineDetailVCTrackHelper : NSObject
@property (nonatomic) NSMutableSet videoPlayItemIDs;
- (void)markVideoPlayWithItemID:;
- (BOOL)videoHasPlayedWithItemID:;
- (id)videoPlayItemIDs;
- (void)setVideoPlayItemIDs:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)reset;
+ (id)sharedInstace;
@end
