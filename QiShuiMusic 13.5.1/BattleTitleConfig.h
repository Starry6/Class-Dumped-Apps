@interface BattleTitleConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString content;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString hotsoonScheme;
@property (nonatomic) HTSLiveImage newIcon;
@property (nonatomic) BOOL hasNewIcon;
@property (nonatomic) HTSLiveImage preIcon;
@property (nonatomic) BOOL hasPreIcon;
@property (nonatomic) HTSLiveImage iconBackImg;
@property (nonatomic) BOOL hasIconBackImg;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) q backgroundShowDelayMs;
@property (nonatomic) NSString openScheme;
+ (id)descriptor;
@end
