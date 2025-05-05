@interface HTSLiveChatItem : IESLivePBBaseMessage
@property (nonatomic) q headSize;
@property (nonatomic) q contentSize;
@property (nonatomic) NSString contentColor;
@property (nonatomic) HTSLiveFlexImageStruct background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) q backgroundHight;
@property (nonatomic) q backgroundWidth;
@property (nonatomic) q useRate;
+ (id)descriptor;
@end
