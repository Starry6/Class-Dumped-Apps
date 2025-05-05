@interface IESLiveTextFormat : IESLivePBBaseMessage
@property (nonatomic) NSInteger fontType;
@property (nonatomic) NSInteger fontSize;
@property (nonatomic) NSInteger fontStyle;
@property (nonatomic) NSString fontColor;
+ (id)descriptor;
@end
