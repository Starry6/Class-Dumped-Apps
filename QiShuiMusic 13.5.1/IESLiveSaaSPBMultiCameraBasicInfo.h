@interface IESLiveSaaSPBMultiCameraBasicInfo : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString iconBackgroundColor;
@property (nonatomic) NSString panelBackgroundColor;
@property (nonatomic) IESLiveSaaSPBImage iconPad;
@property (nonatomic) BOOL hasIconPad;
@property (nonatomic) BOOL banXgs;
@property (nonatomic) BOOL supportVsCore;
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger defaultDisplayDuration;
+ (id)descriptor;
@end
