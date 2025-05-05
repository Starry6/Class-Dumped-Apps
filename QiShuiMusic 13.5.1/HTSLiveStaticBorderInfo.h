@interface HTSLiveStaticBorderInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage top;
@property (nonatomic) BOOL hasTop;
@property (nonatomic) HTSLiveImage bottom;
@property (nonatomic) BOOL hasBottom;
@property (nonatomic) HTSLiveImage left;
@property (nonatomic) BOOL hasLeft;
@property (nonatomic) HTSLiveImage right;
@property (nonatomic) BOOL hasRight;
+ (id)descriptor;
@end
