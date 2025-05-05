@interface HTSLiveMyLiveTabItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveMyLiveTabItem_UIConfig uiConfig;
@property (nonatomic) BOOL hasUiConfig;
@property (nonatomic) DSLContainer dslItem;
@property (nonatomic) BOOL hasDslItem;
+ (id)descriptor;
@end
