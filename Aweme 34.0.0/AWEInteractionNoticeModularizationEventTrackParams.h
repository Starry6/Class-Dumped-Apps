@interface AWEInteractionNoticeModularizationEventTrackParams : NSObject
@property (nonatomic) NSDictionary notificationNoticeParams;
@property (nonatomic) NSDictionary notificationMessageInnerMessageParams;
@property (nonatomic) NSDictionary messageStopNoticeParams;
@property (nonatomic) NSDictionary messageRestoreNoticeParams;
@property (nonatomic) NSDictionary commentLikeParams;
@property (nonatomic) NSDictionary commentReplyParams;
- (id)commentLikeParams;
- (id)notificationMessageInnerMessageParams;
- (id)commentReplyParams;
- (id)messageRestoreNoticeParams;
- (id)messageStopNoticeParams;
- (id)notificationNoticeParams;
- (void)setNotificationNoticeParams:;
- (void)setNotificationMessageInnerMessageParams:;
- (void)setMessageStopNoticeParams:;
- (void)setMessageRestoreNoticeParams:;
- (void)setCommentLikeParams:;
- (void)setCommentReplyParams:;
- (void).cxx_destruct;
+ (id)paramsWithDictionary:;
@end
