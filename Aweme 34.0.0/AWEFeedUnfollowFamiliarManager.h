@interface AWEFeedUnfollowFamiliarManager : NSObject
@property (nonatomic) NSMutableSet unfollowFamiliarIDs;
@property (nonatomic) NSMutableSet reasonLabelIDs;
@property (nonatomic) NSMutableSet monitoredIDs;
@property (nonatomic) NSString currentItemID;
@property (nonatomic) NSString currentHideReason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)cellWillDisplay:;
- (void)setCurrentItemID:;
- (id)currentItemID;
- (BOOL)canShowReasonLabel:;
- (BOOL)canShowUnfollowFamiliarElement:;
- (void)markShowReasonLabel:;
- (void)markUnfollowFamiliarAwemeModel:hideFollowButtonReason:;
- (id)unfollowFamiliarIDs;
- (id)reasonLabelIDs;
- (id)monitoredIDs;
- (void)monitorNotShowTheSameTimeWithAwemeModelItemID:authorUID:;
- (void)setCurrentHideReason:;
- (BOOL)notShowUnfollowFamiliarElementOrReasonLabelTheSameTime:;
- (id)currentHideReason;
- (void)markShowUnfollowFamiliarElement:;
- (void)monitorUnfollowFamiliarFollowButton:;
- (void)monitorFollowButtonAndMateButtonError:;
- (void)setUnfollowFamiliarIDs:;
- (void)setReasonLabelIDs:;
- (void)setMonitoredIDs:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
