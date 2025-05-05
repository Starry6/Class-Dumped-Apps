@interface AWEIMShareAndForwardShopImpl : NSObject
@property (nonatomic) UIImageView iconImageView;
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
- (id)messageTypeForShareTrack;
- (void)p_setECommerceContentLabelText:sub:alertTopView:contentLabel:coverImageView:;
- (void)saveBusinessModelToIMSetting;
- (void)setForwardMessage:;
- (void)setShareContext:;
- (id)shareContext;
- (id)shareMessage;
- (id)shopOwnerModel;
- (void)willTransferToShareListVC:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIconImageView:;
@end
