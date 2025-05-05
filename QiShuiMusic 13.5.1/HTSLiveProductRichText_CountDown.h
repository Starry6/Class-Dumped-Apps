@interface HTSLiveProductRichText_CountDown : IESLivePBBaseMessage
@property (nonatomic) NSInteger countdown;
@property (nonatomic) NSInteger fontSize;
@property (nonatomic) NSString color;
@property (nonatomic) NSString placeHolder;
+ (id)descriptor;
@end
