@interface AWEIMShareAndForwardProfileImpl : NSObject
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
- (void)didSelectShareUser:inVC:;
- (id)forwardMessage;
- (void)saveBusinessModelToIMSetting;
- (void)setForwardMessage:;
- (void)setShareContext:;
- (id)shareContext;
- (id)shareMessage;
- (BOOL)shouldTransferToSharelistVC:;
- (void)willTransferToShareListVC:;
- (void).cxx_destruct;
- (id)profileModel;
@end
