@interface AWEIMDisrecommendUtils : NSObject
@property (nonatomic) AWEPopoverActionSheet popover;
@property (nonatomic) DUXPopover duxPopover;
- (void)setDuxPopover:;
- (id)duxPopover;
- (id)popover;
- (void).cxx_destruct;
- (void)setPopover:;
+ (BOOL)isInDisRecommendListWithShareModel:;
+ (id)getCollectionViewLocationCellWith:gesRecognizer:;
+ (void)addDisrecommendWithShareModel:;
+ (id)getDisrecommendTitleString;
+ (void)p_traceDisrecommendPanelConfirmWithShareModel:enterFrom:;
+ (id)getDisRecommendDic;
+ (void)p_traceCancelWithShareModel:enterFrom:;
+ (void)p_traceMenuShowWithShareModel:isDisrecommend:enterFrom:;
+ (void)p_traceMenuDisrecommendWithShareModel:enterFrom:;
+ (void)removeDisrecommendWithShareModel:;
+ (void)disrecommendHerPostWithShareModel:enterFrom:complete:;
+ (void)getDisrecommendShareModelWithCompletion:;
+ (void)p_showPopoverWithTargetView:;
+ (id)getRecoverRecommendTitleString;
+ (BOOL)isPopoverReplaceABTestOn;
+ (id)sharedInstance;
@end
