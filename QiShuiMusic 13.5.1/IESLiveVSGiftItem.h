@interface IESLiveVSGiftItem : IESLiveDynamicModel
@property (nonatomic) q state;
@property (nonatomic) IESLiveVSGiftPanelDataSharing dataSharing;
@property (nonatomic) IESLiveVSGiftPanelCommonReactionCenter reactionCenter;
@property (nonatomic) NSString sendDesc;
@property (nonatomic) HTSLiveGiftStruct giftModel;
@property (nonatomic) BOOL selectedFromOpen;
@property (nonatomic) @? stateDidChange;
@property (nonatomic) @? giftPanelWillDismissBlock;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataSharing:;
- (id)dataSharing;
- (void)giftPanelWillDismiss;
- (id)initWithDataSharing:withReactionCenter:;
- (id)reactionCenter;
- (void)setReactionCenter:;
- (void)setStateDidChange:;
- (void)active;
- (void)setState:;
- (void)inactive;
- (long long)state;
- (void).cxx_destruct;
- (void)reset;
- (id)stateDidChange;
@end
