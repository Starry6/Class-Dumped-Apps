@interface HTSLiveGeneralCarnivalMessage_CarnivalDanmakuItem : IESLivePBBaseMessage
@property (nonatomic) NSString contentColor;
@property (nonatomic) HTSLiveFlexImageStruct background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) q backgroundHight;
@property (nonatomic) q backgroundWidth;
@property (nonatomic) q useRate;
@property (nonatomic) q fontSize;
+ (id)descriptor;
@end
