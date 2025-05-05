@interface FirstChargeResponse_RichText : IESLivePBBaseMessage
@property (nonatomic) NSString type;
@property (nonatomic) NSString text;
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
@property (nonatomic) q fontSize;
@property (nonatomic) NSString fontColor;
@property (nonatomic) q weight;
+ (id)descriptor;
@end
