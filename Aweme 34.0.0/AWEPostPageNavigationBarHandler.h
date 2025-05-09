@interface AWEPostPageNavigationBarHandler : NSObject
@property (nonatomic) q backButtonDidClickSignal;
@property (nonatomic) q draftCancelButtonDidClickSignal;
@property (nonatomic) q cancelButtonDidClickSignal;
@property (nonatomic) q finishButtonDidClickSignal;
@property (nonatomic) q draftButtonDidClickSignal;
@property (nonatomic) q publishButtonDidClickSignal;
@property (nonatomic) q publishFriendsDailyButtonDidClickSignal;
@property (nonatomic) q switchInputButtonDidClickSignal;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (void)sendBackButtonDidClickSignal;
- (void)sendDraftCancelButtonDidClickSignal;
- (void)sendCancelButtonDidClickSignal;
- (void)sendFinishButtonDidClickSignal;
- (void)sendDraftButtonDidClickSignal;
- (void)sendPublishButtonDidClickSignal;
- (void)sendPublishFriendsDailyButtonDidClickSignal;
- (void)sendSwitchInputButtonDidClickSignal;
- (long long)backButtonDidClickSignal;
- (long long)draftCancelButtonDidClickSignal;
- (long long)cancelButtonDidClickSignal;
- (long long)finishButtonDidClickSignal;
- (long long)draftButtonDidClickSignal;
- (long long)publishButtonDidClickSignal;
- (long long)publishFriendsDailyButtonDidClickSignal;
- (long long)switchInputButtonDidClickSignal;
- (void)setBackButtonDidClickSignal:;
- (void)setDraftCancelButtonDidClickSignal:;
- (void)setCancelButtonDidClickSignal:;
- (void)setFinishButtonDidClickSignal:;
- (void)setDraftButtonDidClickSignal:;
- (void)setPublishButtonDidClickSignal:;
- (void)setPublishFriendsDailyButtonDidClickSignal:;
- (void)setSwitchInputButtonDidClickSignal:;
- (void).cxx_destruct;
- (id)context;
@end
