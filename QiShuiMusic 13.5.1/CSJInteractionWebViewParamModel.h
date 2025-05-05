@interface CSJInteractionWebViewParamModel : NSObject
@property (nonatomic) UIViewController parentVC;
@property (nonatomic) <CSJInteractionWebViewWidgetDelegate> interactionDelegate;
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) CSJMaterialMeta materialMeta;
@property (nonatomic) NSDictionary adViewInfo;
@property (nonatomic) BOOL needCheckInteractionArea;
@property (nonatomic) NSDictionary estimatedInteractionAreaInfo;
- (id)adSlot;
- (id)adViewInfo;
- (id)estimatedInteractionAreaInfo;
- (id)materialMeta;
- (BOOL)needCheckInteractionArea;
- (void)setAdSlot:;
- (void)setAdViewInfo:;
- (void)setEstimatedInteractionAreaInfo:;
- (void)setMaterialMeta:;
- (void)setNeedCheckInteractionArea:;
- (id)interactionDelegate;
- (void)setInteractionDelegate:;
- (void).cxx_destruct;
- (id)parentVC;
- (void)setParentVC:;
@end
