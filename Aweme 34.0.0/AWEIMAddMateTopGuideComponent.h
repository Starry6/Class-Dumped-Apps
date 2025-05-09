@interface AWEIMAddMateTopGuideComponent : AWEIMComponentBase
@property (nonatomic) AWEIMCommonTopFloatView guideView;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) AWEIMCodeGenConversationBannerConfigurationModel bannerModel;
@property (nonatomic) NSDictionary bannerFrequencyInfo;
@property (nonatomic) BOOL didFecthFullUserDetail;
@property (nonatomic) AWESocialRelationObserver mateStatusObserver;
@property (nonatomic) BOOL showInFloatMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? continueBlock;
@property (nonatomic) @? removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) Q priorityValue;
- (void)setIsDisplaying:;
- (BOOL)showInFloatMode;
- (void)setShowInFloatMode:;
- (id)removeBlock;
- (void)setRemoveBlock:;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)componentDidMounted:;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:source:;
- (id)bannerModel;
- (void)setBannerModel:;
- (void)p_observeMateStatus;
- (void)p_updateMateRelation:;
- (void)setMateStatusObserver:;
- (id)mateStatusObserver;
- (void)showBannerViewWithCompletion:;
- (void)p_dismissBanner;
- (BOOL)p_shouldShow;
- (void)p_showBanner;
- (void)p_createGuideView;
- (void)p_reportShow;
- (void)p_action;
- (void)p_reportAction;
- (void)p_reportClose;
- (void)p_reportWithEnum:;
- (void)p_trackWithEvent:extraDict:;
- (void)setBannerFrequencyInfo:;
- (void)p_tryRegisterBanner;
- (id)p_resolvedExtraParams:;
- (id)getSheetContext;
- (id)generateRelationContext:;
- (id)trackStatusString;
- (BOOL)didFecthFullUserDetail;
- (id)bannerFrequencyInfo;
- (id)resolvedConvBannerConfig;
- (void)setDidFecthFullUserDetail:;
- (void)setInvalid:;
- (void).cxx_destruct;
- (BOOL)invalid;
- (BOOL)isDisplaying;
- (id)continueBlock;
- (void)setContinueBlock:;
- (unsigned long long)priorityValue;
- (void)setPriorityValue:;
- (id)guideView;
- (void)setGuideView:;
+ (BOOL)canCreateComponentWithContext:;
@end
