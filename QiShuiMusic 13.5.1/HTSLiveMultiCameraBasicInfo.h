@interface HTSLiveMultiCameraBasicInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString iconBackgroundColor;
@property (nonatomic) NSString panelBackgroundColor;
@property (nonatomic) HTSLiveImage iconPad;
@property (nonatomic) BOOL hasIconPad;
@property (nonatomic) BOOL banXgs;
@property (nonatomic) BOOL supportVsCore;
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger defaultDisplayDuration;
+ (id)descriptor;
@end
