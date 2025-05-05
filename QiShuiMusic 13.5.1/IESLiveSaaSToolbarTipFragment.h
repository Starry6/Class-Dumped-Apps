@interface IESLiveSaaSToolbarTipFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSToolbarTipStore toolbarTipStore;
@property (nonatomic) NSMutableArray giftsTipHistory;
@property (nonatomic) <HTSLiveSaaSToolbarTip> tip;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)giftsTipHistory;
- (id)toolbarTipStore;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)didSetAttachingDIContext;
- (void)setGiftsTipHistory:;
- (void)setToolbarTipStore:;
- (void)showToolBarTipIfNeeded:;
- (id)init;
- (id)tip;
- (void)setTip:;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
