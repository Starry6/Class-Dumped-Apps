@interface AWEIMShareAndForwardProfileImpl : NSObject
@property (nonatomic) BOOL forbidToast;
@property (nonatomic) <IESIMShareContextProtocol> shareContext;
@property (nonatomic) AWEIMMessage forwardMessage;
@property (nonatomic) NSString accessoryText;
@property (nonatomic) NSString createGroupEnterFrom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShareContext:;
- (id)extraTrackInfo;
- (id)shareContext;
- (id)forwardMessage;
- (void)setForwardMessage:;
- (BOOL)forbidToast;
- (void)setForbidToast:;
- (id)createGroupEnterFrom;
- (void)setCreateGroupEnterFrom:;
- (id)businessModelFromIMSetting;
- (void)saveBusinessModelToIMSetting;
- (void)clearBusinessModelFromIMSetting;
- (void)configShareBottomInputViewWithCoverImageView:;
- (void)configShareAlertTopView:withCoverImageView:contentLabel:;
- (id)shareMessage;
- (void)willTransferToShareListVC:;
- (BOOL)shouldTransferToSharelistVC:;
- (void)didSelectShareUser:inVC:;
- (void)didShareToShareUserList:;
- (id)shareTypeWithIMShareModelType:;
- (void)setAccessoryText:;
- (id)accessoryText;
- (void).cxx_destruct;
- (id)profileModel;
@end
