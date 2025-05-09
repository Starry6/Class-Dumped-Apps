@interface IESLiveSpeedSlotSpeedGiftHolder : NSObject
@property (nonatomic) IESLiveSpeedGiftResourceSet speedGift;
@property (nonatomic) IESLiveGiveGiftTransaction transaction;
@property (nonatomic) IESLiveVSSendGiftCommandQueue sendCommandQueue;
@property (nonatomic) IESLiveBottomShortcutButton speedGiftButton;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <IESLiveCustomConfigAdapter> customConfig;
@property (nonatomic) SpeedyGiftPopupInfo speedyGiftPopupInfoModel;
@property (nonatomic) <IESLiveURLSchemaHandlerAdapter> schemaURLHandler;
@property (nonatomic) BOOL didTrackDisplay;
@property (nonatomic) BOOL comboAnimationDidStart;
@property (nonatomic) HTSLiveArtTextLabel xLabel;
@property (nonatomic) HTSLiveArtTextLabel comboCountLabel;
@property (nonatomic) q giftSource;
@property (nonatomic) <HTSLiveSpeedGiftActions> speedGiftActionCreator;
@property (nonatomic) Q buttonComboCount;
@property (nonatomic) Q waitingCount;
@property (nonatomic) IESLiveCountTimer sendTimer;
@property (nonatomic) IESLiveCountTimer comboTimer;
@property (nonatomic) IESLiveCountTimer comboCountDismissTimer;
@property (nonatomic) <IESLiveMotionGuideCoordinator> guideCoordinator;
@property (nonatomic) UIView buttonComboView;
@property (nonatomic) BOOL isSending;
@property (nonatomic) BOOL resetSendingStateWhenSendFail;
@property (nonatomic) <HTSLiveAutoHideAction> autoHideActionDispatcher;
@property (nonatomic) BOOL blockAutoHideEnabled;
@property (nonatomic) UILabel coinNumberLabel;
@property (nonatomic) UIView coinImageView;
@property (nonatomic) IESLiveSpeedSlotTranslationTask translationTask;
@property (nonatomic) IESLiveSpeedSlotTranslationTask pendingTranslationTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buttonComboView;
- (id)speedGiftButton;
- (void)updateSpeedGiftButtonAppearance;
- (id)coinNumberLabel;
- (id)comboCountLabel;
- (BOOL)didTrackDisplay;
- (void)goLogin;
- (void)_trackSpeedGiftToolBarIconClickWithGiftId:;
- (void)actionFromAlertWithParams:fromNewAlert:;
- (id)autoHideActionDispatcher;
- (BOOL)blockAutoHideEnabled;
- (void)blockAutoHideIfNeeded;
- (unsigned long long)buttonComboCount;
- (void)cancelBlockAutoHideIfNeeded;
- (BOOL)checkShouldAlertPersonalityPopView;
- (void)clickTipViewConfirmWithResourceSet:;
- (id)coinImageView;
- (BOOL)comboAnimationDidStart;
- (id)comboCountDismissTimer;
- (id)comboTimer;
- (void)commandDidExecute:command:error:;
- (void)createButtonComboView;
- (void)createSpeedSlotGiftTransactionWithSequence:;
- (id)customConfig;
- (void)didLoadSpeedSlotItem:interactionResponder:;
- (void)didSpeedSlotItemClicked:interactionResponder:;
- (void)didUpdateSpeedSlotItem:interactionResponder:;
- (id)executeBreathAnimation;
- (id)executeCoinMoveAnimationFromStart:toTarget:;
- (id)getSpeedGiftResourceSet;
- (long long)giftSource;
- (id)guideCoordinator;
- (id)initWith:componentContext:trackContext:;
- (BOOL)isBanlanceEnough;
- (void)lackOfDiamond;
- (long long)newAddedClickNumberOfGiftsInSequence;
- (void)p_sendInVSRoom;
- (void)p_sendSpeedGiftFromNewAlert:;
- (void)p_sequenceSendInNormalRoom;
- (void)p_showAlert;
- (id)pendingTranslationTask;
- (void)playCoinAnimationFromCGPoint:;
- (void)pr_trackSpeedGiftToolBarIconShowWithGiftIdWithForceUpdate:;
- (void)prepareSendSpeedGift;
- (BOOL)resetSendingStateWhenSendFail;
- (id)roomModel;
- (id)schemaURLHandler;
- (id)sendCommandQueue;
- (void)sendSpeedGift;
- (void)sendSpeedGiftFromNewAlert;
- (void)sendSpeedGiftInNormalRoom;
- (id)sendTimer;
- (void)setAutoHideActionDispatcher:;
- (void)setBlockAutoHideEnabled:;
- (void)setButtonComboCount:;
- (void)setButtonComboView:;
- (void)setCoinImageView:;
- (void)setCoinNumberLabel:;
- (void)setComboAnimationDidStart:;
- (void)setComboCountDismissTimer:;
- (void)setComboCountLabel:;
- (void)setComboTimer:;
- (void)setCustomConfig:;
- (void)setDidTrackDisplay:;
- (void)setGiftSource:;
- (void)setGuideCoordinator:;
- (void)setPendingTranslationTask:;
- (void)setResetSendingStateWhenSendFail:;
- (void)setRoomModel:;
- (void)setSchemaURLHandler:;
- (void)setSendCommandQueue:;
- (void)setSendTimer:;
- (void)setSpeedGift:;
- (void)setSpeedGiftActionCreator:;
- (void)setSpeedGiftButton:;
- (void)setSpeedyGiftPopupInfoModel:;
- (void)setTrackContext:;
- (void)setWaitingCount:;
- (BOOL)shouldBlockAutoHide;
- (BOOL)shouldShowTipAlert;
- (void)showLackOfBanlance;
- (void)showPersonalityPopView;
- (void)showTipAlertIfNeeded;
- (id)speedGift;
- (id)speedGiftActionCreator;
- (id)speedyGiftPopupInfoModel;
- (void)startButtonComboCountAnimation;
- (void)startCoinAnimationPlay;
- (void)startSpeedGiftButtonComboAnimation;
- (void)stopSpeedGiftButtonComboAnimation;
- (void)toolbarComponentUpdate:;
- (id)trackContext;
- (void)trackForTipViewClickWithResourceSet:isConfirmed:;
- (void)trackForTipViewDisplayWithResourceSet:;
- (void)tryToChangeToMiddleAnimationSpeedSlotType;
- (void)tryToExchangeIncomeToCoinAndSendGift;
- (unsigned long long)waitingCount;
- (void)willLoadSpeedSlotItem:interactionResponder:;
- (void)setXLabel:;
- (id)xLabel;
- (void)setTransaction:;
- (id)transaction;
- (void)endTransaction;
- (BOOL)isSending;
- (void).cxx_destruct;
- (id)translationTask;
- (void)setTranslationTask:;
- (void)setIsSending:;
@end
