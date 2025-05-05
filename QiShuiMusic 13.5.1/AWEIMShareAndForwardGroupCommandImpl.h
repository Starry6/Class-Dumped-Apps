@interface AWEIMShareAndForwardGroupCommandImpl : NSObject
@property (nonatomic) AWEShareContext shareContext;
@property (nonatomic) AWEIMMessage forwardMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearBusinessModelFromIMSetting;
- (id)businessModelFromIMSetting;
- (void)configShareAlertTopView:withCoverImageView:contentLabel:;
- (void)configShareBottomInputViewWithCoverImageView:;
- (id)forwardMessage;
- (id)groupCommandModel;
- (void)saveBusinessModelToIMSetting;
- (void)setForwardMessage:;
- (void)setShareContext:;
- (id)shareContext;
- (id)shareMessage;
- (void)showCustomTipsAfterSendMessagesWithShareUserList:;
- (void).cxx_destruct;
@end
