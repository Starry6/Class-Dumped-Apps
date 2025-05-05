@interface HTSLiveProductRichText_Text : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger fontSize;
@property (nonatomic) NSString color;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSInteger fontWeight;
@property (nonatomic) NSString fontStyle;
@property (nonatomic) NSString textDecoration;
@property (nonatomic) NSString fontFamily;
@property (nonatomic) NSInteger lineHeight;
+ (id)descriptor;
@end
