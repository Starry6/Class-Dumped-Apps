@interface IESLiveSaaSPBBattleTitleConfig : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString content;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString hotsoonScheme;
@property (nonatomic) IESLiveSaaSPBImage newIcon;
@property (nonatomic) BOOL hasNewIcon;
@property (nonatomic) IESLiveSaaSPBImage preIcon;
@property (nonatomic) BOOL hasPreIcon;
@property (nonatomic) IESLiveSaaSPBImage iconBackImg;
@property (nonatomic) BOOL hasIconBackImg;
+ (id)descriptor;
@end
