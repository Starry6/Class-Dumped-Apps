@interface AWEIMFeedUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFeedMessage:;
- (BOOL)isFeedMessageType:;
- (BOOL)isQuotedBulletMessage:;
- (BOOL)isBulletFeedMessageCanQuoteReply:;
- (BOOL)isUnreadFeedMessage:;
- (BOOL)isFeedBulletMessageType:;
- (BOOL)isUnreadFeedBulletMessage:;
- (void)saveIMMessageUnreadStateWithBulletMessage:;
- (void)cleanTrackerWhenLeaveScene;
- (id)feedVideoUnavailableBubbleModel:;
+ (id)sharedIntance;
@end
