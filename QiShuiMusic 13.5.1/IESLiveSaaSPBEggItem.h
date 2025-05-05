@interface IESLiveSaaSPBEggItem : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) q backgroundHight;
@property (nonatomic) q backgroundWidth;
@property (nonatomic) q useRate;
@property (nonatomic) q isDynamicEgg;
+ (id)descriptor;
@end
