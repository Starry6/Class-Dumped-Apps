@interface BattleRivalTag : IESLivePBBaseMessage
@property (nonatomic) UIView customView;
@property (nonatomic) HTSLiveImage bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) HTSLiveImage iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (nonatomic) NSString content;
@property (nonatomic) NSString fontColor;
@property (nonatomic) NSInteger tagType;
- (void)setCustomView:;
- (id)customView;
+ (id)descriptor;
@end
