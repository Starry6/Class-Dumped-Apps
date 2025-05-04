@interface AWEShareIMContactListViewModel : NSObject
@property (nonatomic) <AWEIMQuickReplyControllerHandlerPortocol> quickReplyHandler;
@property (nonatomic) AWEShareContext context;
@property (nonatomic) NSArray imShareModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setQuickReplyHandler:;
- (id)quickReplyHandler;
- (id)imShareModels;
- (void)setImShareModels:;
- (void)shareToUser:;
- (id)fetchExternalShareEventContext;
- (void)sharePrivacyToUser:;
- (void)startFetchingIMContact:;
- (void)showMoreFriendsPanelWithTrackParams:;
- (void)trackClickSendTextButton;
- (void)trackShareVideoWithPlatform:;
- (void)trackShareToUser:withPlatform:;
- (void)trackAdShareIfNeeded;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
