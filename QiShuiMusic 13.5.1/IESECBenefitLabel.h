@interface IESECBenefitLabel : GPBMessage
@property (nonatomic) NSString leftText;
@property (nonatomic) NSString rightText;
@property (nonatomic) NSInteger textStyle;
@property (nonatomic) NSInteger colorStyle;
@property (nonatomic) NSInteger divLine;
+ (id)descriptor;
@end
