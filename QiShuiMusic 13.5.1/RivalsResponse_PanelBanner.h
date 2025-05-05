@interface RivalsResponse_PanelBanner : IESLivePBBaseMessage
@property (nonatomic) RivalsResponse_PanelBanner_Action action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) HTSLiveImage bgImage;
@property (nonatomic) BOOL hasBgImage;
+ (id)descriptor;
@end
