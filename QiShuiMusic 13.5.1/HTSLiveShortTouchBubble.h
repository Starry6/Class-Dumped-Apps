@interface HTSLiveShortTouchBubble : IESLivePBBaseMessage
@property (nonatomic) NSString bubbleId;
@property (nonatomic) HTSLiveTextViewModel uiModel;
@property (nonatomic) BOOL hasUiModel;
@property (nonatomic) NSInteger strategy;
@property (nonatomic) NSInteger duration;
+ (id)descriptor;
@end
