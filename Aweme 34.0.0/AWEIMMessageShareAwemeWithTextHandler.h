@interface AWEIMMessageShareAwemeWithTextHandler : NSObject
@property (nonatomic) BOOL isSending;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) <AWEIMShareModelProtocol> shareModel;
@property (nonatomic) <IESIMShareContextProtocol> context;
@property (nonatomic) BOOL isDisplayVideoBtn;
@property (nonatomic) BOOL enableClearButton;
@property (nonatomic) NSString defaultContent;
@property (nonatomic) BOOL separateMsg;
@property (nonatomic) NSString customToast;
@property (nonatomic) Q imQuoteReplyType;
@property (nonatomic) @? sendCompletion;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString sendEnterMethod;
@property (nonatomic) NSDictionary activityTrackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (void)setImQuoteReplyType:;
- (void)showQuickReplyController;
- (unsigned long long)imQuoteReplyType;
- (void)setSendEnterMethod:;
- (id)sendEnterMethod;
- (id)defaultContent;
- (void)setDefaultContent:;
- (void)setCustomToast:;
- (void)setIsDisplayVideoBtn:;
- (void)p_customQuickReplyVC:;
- (void)quickReplyViewController:didSelectEmoticonModel:;
- (void)quickReplyViewController:didSendContent:;
- (void)quickReplyViewControllerWillDismiss:;
- (BOOL)isDisplayVideoBtn;
- (BOOL)enableClearButton;
- (void)setEnableClearButton:;
- (id)activityTrackParams;
- (void)setActivityTrackParams:;
- (id)customToast;
- (BOOL)separateMsg;
- (void)setSeparateMsg:;
- (void)setSendCompletion:;
- (void)p_sendMessageWithText:messageType:;
- (id)init;
- (id)sendCompletion;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (BOOL)isSending;
- (void)setShareModel:;
- (id)shareModel;
- (void)setIsSending:;
@end
