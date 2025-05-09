@interface AWEIMLynxCardContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSNumber enterpriseLynxEngineType;
@property (nonatomic) BOOL shouldInactiveEnterpriseInstantMessageCard;
@property (nonatomic) BOOL shouldShowCoverView;
@property (nonatomic) {CGSize=dd} initialLynxViewSize;
@property (nonatomic) NSString messageID;
@property (nonatomic) AWEEnterpriseIMMessageCardBaseViewModel enterpriseViewModel;
@property (nonatomic) @? didUpdateCellContentSizeBlock;
@property (nonatomic) @? didFinishLynxLoadBlock;
@property (nonatomic) @? didRegisterLynxContextBlock;
@property (nonatomic) @? didTapHookGestureViewBlock;
@property (nonatomic) @? didTriggerHitTestBlock;
- (BOOL)shouldInactiveEnterpriseInstantMessageCard;
- (id)didFinishLynxLoadBlock;
- (id)didUpdateCellContentSizeBlock;
- (void)setDidFinishLynxLoadBlock:;
- (void)setDidUpdateCellContentSizeBlock:;
- (void)setEnterpriseLynxEngineType:;
- (void)setEnterpriseViewModel:;
- (void)setShouldInactiveEnterpriseInstantMessageCard:;
- (void)setShouldShowCoverView:;
- (void)setDidTapHookGestureViewBlock:;
- (void)setDidRegisterLynxContextBlock:;
- (void)setDidTriggerHitTestBlock:;
- (void)setInitialLynxViewSize:;
- (id)enterpriseViewModel;
- (id)enterpriseLynxEngineType;
- (BOOL)shouldShowCoverView;
- (id)initialLynxViewSize;
- (id)didRegisterLynxContextBlock;
- (id)didTapHookGestureViewBlock;
- (id)didTriggerHitTestBlock;
- (id)messageID;
- (void)setMessageID:;
- (void).cxx_destruct;
@end
