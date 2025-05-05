@interface HTSLiveTextViewModel : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) NSInteger textSize;
@property (nonatomic) NSString bgColor;
+ (id)descriptor;
@end
