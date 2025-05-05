@interface IESLiveSaaSPBBattleRivalTag : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) IESLiveSaaSPBImage iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (nonatomic) NSString content;
@property (nonatomic) NSString fontColor;
@property (nonatomic) NSInteger tagType;
+ (id)descriptor;
@end
