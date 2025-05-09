@interface AWEUserActionSheetView : UIView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableArray actions;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) @? cancelHandler;
@property (nonatomic) @? btmRecordBlock;
@property (nonatomic) UIFont defaultTitleFont;
@property (nonatomic) Q viewStyle;
@property (nonatomic) Q animationStyle;
- (void)setTextColorWhiteRecursivelyInView:;
- (void)applyBlurEffectAndWhiteText;
- (void)layoutSubviews;
- (id)messageReach_title;
- (void)showOnView:;
- (id)generateLineView;
- (void)fadeOutAnimation:;
- (void)clickAction:;
- (id)aAWEPadBizUIAdapter;
- (void)tapMaskAction;
- (void)reloadUI;
- (void)doShowAnimation:;
- (id)btmRecordBlock;
- (void)doHideAnimation:;
- (void)setupPanelSubviews:;
- (void)fadeInAnimation:;
- (void)defaultShowAnimation:;
- (void)defaultHideAnimation:;
- (void)setBtmRecordBlock:;
- (void)setMr_didRegisterActionListener:;
- (id)mr_didRegisterActionListener;
- (void)messageReach_showOnView:;
- (void)messageReach_dismiss:;
- (void)messageReach_clickAction:;
- (void)messageReach_cancelAction;
- (void)messageReach_closeAction;
- (void)messageReach_tapMaskAction;
- (void)show;
- (id)init;
- (void)addAction:;
- (unsigned long long)viewStyle;
- (void)setBackgroundView:;
- (id)actions;
- (id)containerView;
- (void)setCancelHandler:;
- (id)defaultTitleFont;
- (id)backgroundView;
- (void)dismiss;
- (void)setContainerView:;
- (void)setAnimationStyle:;
- (void).cxx_destruct;
- (void)setViewStyle:;
- (void)closeAction;
- (void)setActions:;
- (void)cancelAction;
- (unsigned long long)animationStyle;
- (void)dismiss:;
- (void)setDefaultTitleFont:;
- (id)cancelHandler;
- (void)insertAction:atIndex:;
+ (BOOL)isSomeActionSheetShowing;
+ (id)instanceWithActions:cancelHandler:;
+ (Class)aAWEPadBizUIAdapterClass;
+ (void)messageReach_alertTrackerLoad;
@end
