@interface PanelBtn : IESLivePBBaseMessage
@property (nonatomic) NSInteger btnType;
@property (nonatomic) NSString btnText;
@property (nonatomic) NSString btnColor;
+ (id)descriptor;
@end
