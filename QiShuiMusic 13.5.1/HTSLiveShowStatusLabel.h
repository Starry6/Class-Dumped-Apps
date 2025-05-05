@interface HTSLiveShowStatusLabel : IESLivePBBaseMessage
@property (nonatomic) NSString showStatusLabelText;
@property (nonatomic) float showStatusLabelTextTransparency;
@property (nonatomic) NSString showStatusLabelBgColor;
+ (id)descriptor;
@end
