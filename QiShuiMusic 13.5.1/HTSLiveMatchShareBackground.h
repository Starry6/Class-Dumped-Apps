@interface HTSLiveMatchShareBackground : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage verticalImg;
@property (nonatomic) BOOL hasVerticalImg;
@property (nonatomic) HTSLiveImage horizontalImg;
@property (nonatomic) BOOL hasHorizontalImg;
+ (id)descriptor;
@end
