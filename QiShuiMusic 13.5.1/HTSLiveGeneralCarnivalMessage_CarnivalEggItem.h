@interface HTSLiveGeneralCarnivalMessage_CarnivalEggItem : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) q backgroundHight;
@property (nonatomic) q backgroundWidth;
@property (nonatomic) q useRate;
@property (nonatomic) q isDynamicEgg;
@property (nonatomic) BOOL showAlone;
+ (id)descriptor;
@end
