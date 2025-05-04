@interface AWEMateApplicationTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackAwemeModelFriendCard:enterFrom:eventType:;
+ (void)trackEnterFriendListWithEnterFrom:enterMethod:mateCount:extraParams:;
+ (void)trackEnterMutualListWithEnterFrom:enterMethod:extraParams:;
+ (id)getRecommendReason:;
+ (void)trackAddFriendBtnWithEvent:model:;
+ (id)toStatusString:;
+ (void)trackEnterPersonalDetailWithEnterFrom:user:trackParams:;
+ (void)trackClickRequestReplyWithModel:;
+ (void)trackSendRequestReplyWithModel:;
+ (void)trackFriendRequestCellShowWithModel:;
+ (void)trackDeleteRequestCellWithModel:;
+ (void)trackEnterFriendApplicationListWithEnterFrom:enterMethod:enterWithNotice:;
+ (void)trackOBDBigCardWithEnterFrom:actionType:;
@end
