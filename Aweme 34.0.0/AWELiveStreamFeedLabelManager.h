@interface AWELiveStreamFeedLabelManager : NSObject
- (id)isContainCurrentUserWithModel:;
- (void)addLiveRoomFeedLabelWithAwemeModel:;
- (void)removeLiveRoomFeedLabelWithAwemeModel:;
- (BOOL)hasRecoomendToFriends:;
+ (id)sharedInstance;
@end
