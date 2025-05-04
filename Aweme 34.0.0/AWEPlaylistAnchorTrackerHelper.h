@interface AWEPlaylistAnchorTrackerHelper : NSObject
@property (nonatomic) NSMutableDictionary publishTrackerContext;
- (void)createTrackItemIfNeededForCreateID:;
- (id)publishTrackerContext;
- (void)setPublishTrackerContext:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
