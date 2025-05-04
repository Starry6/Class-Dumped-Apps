@interface AWEIMDefaultFloatViewTracker : NSObject
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) NSDictionary params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateTrackParams:;
- (BOOL)floatViewControllerDidClickCloseButton:;
- (BOOL)floatViewControllerDidClickConfirmButton:;
- (void)floatViewControllerDidShow:;
- (void)__trackShow;
- (void)__trackClickClose;
- (void)__trackClickConfirm;
- (id)__trackParams;
- (id)initWithTrackParams:;
- (void)triggerShowTracker;
- (void).cxx_destruct;
- (id)params;
- (id)conversation;
- (void)setConversation:;
- (void)setParams:;
@end
