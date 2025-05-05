@interface AWEIMShareAndForwardWebImpl : NSObject
@property (nonatomic) IESIMSaaSShareWebViewModel webViewModel;
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
- (id)coverPlaceholderImageWithDarkSharePanel:;
- (void)didSelectShareUser:inVC:;
- (id)forwardMessage;
- (void)saveBusinessModelToIMSetting;
- (void)setForwardMessage:;
- (void)setShareContext:;
- (void)setWebViewModel:;
- (id)shareContext;
- (id)shareMessage;
- (id)webViewModel;
- (void)willTransferToShareListVC:;
- (void).cxx_destruct;
@end
