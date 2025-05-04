@interface AWEIMLynxContainerBaseTableViewCell : AWEIMFirstResponderUserMessageTableViewCell
@property (nonatomic) UIView lynxPlaceholderView;
@property (nonatomic) UIView lynxEngine;
@property (nonatomic) UIView<AWEEnterpriseIMMessageViewProtocol> enterpriseLynxEngine;
@property (nonatomic) NSString type;
- (id)lynxEngine;
- (id)lynxInitialProperties;
- (void)configWithMessage:;
- (id)menuTargetView;
- (id)enterpriseLynxEngine;
- (void)setEnterpriseLynxEngine:;
- (id)firstResponderContainerView;
- (id)lynxPlaceholderView;
- (void)setLynxPlaceholderView:;
- (void)p_handleLynxEngineWith:;
- (void)p_handleLynxBlock;
- (void)p_tryUploadLoadViewTimeWithSuccess:duration:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (id)sourceUrl;
- (void)didEndDisplaying;
+ (id)contentSizeWithMesasge:;
+ (double)recommendLynxHeightForMessage:;
+ (id)identifier;
@end
