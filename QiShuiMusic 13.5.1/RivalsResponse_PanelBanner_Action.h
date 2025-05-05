@interface RivalsResponse_PanelBanner_Action : IESLivePBBaseMessage
@property (nonatomic) NSString schemeURL;
@property (nonatomic) HTSLiveImage actionImage;
@property (nonatomic) BOOL hasActionImage;
+ (id)descriptor;
@end
