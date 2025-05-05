@interface HTSLiveLuckyBoxMessage_BottomCommentMsg : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) HTSLiveImage background;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) HTSLiveImage leftIcon;
@property (nonatomic) BOOL hasLeftIcon;
@property (nonatomic) HTSLiveImage rightIcon;
@property (nonatomic) BOOL hasRightIcon;
+ (id)descriptor;
@end
