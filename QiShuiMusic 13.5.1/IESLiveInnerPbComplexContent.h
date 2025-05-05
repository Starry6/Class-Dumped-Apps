@interface IESLiveInnerPbComplexContent : GPBMessage
@property (nonatomic) NSString type;
@property (nonatomic) NSString text;
@property (nonatomic) NSString fontColor;
@property (nonatomic) q fontSize;
@property (nonatomic) q weight;
@property (nonatomic) IESLiveInnerPbImage img;
@property (nonatomic) BOOL hasImg;
+ (id)descriptor;
@end
