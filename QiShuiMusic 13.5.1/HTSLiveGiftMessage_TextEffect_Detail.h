@interface HTSLiveGiftMessage_TextEffect_Detail : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) NSInteger textFontSize;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) NSInteger start;
@property (nonatomic) NSInteger duration;
@property (nonatomic) NSInteger x;
@property (nonatomic) NSInteger y;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger shadowDx;
@property (nonatomic) NSInteger shadowDy;
@property (nonatomic) NSInteger shadowRadius;
@property (nonatomic) NSString shadowColor;
@property (nonatomic) NSString strokeColor;
@property (nonatomic) NSInteger strokeWidth;
+ (id)descriptor;
@end
