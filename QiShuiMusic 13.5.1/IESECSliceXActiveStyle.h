@interface IESECSliceXActiveStyle : IESECSliceXBaseModel
@property (nonatomic) UIColor bgColor;
@property (nonatomic) IESECSliceXGradientColor bgGradientColor;
@property (nonatomic) NSString bgImage;
@property (nonatomic) NSNumber opacity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bgGradientColor;
- (void)setBgGradientColor:;
- (void)setOpacity:;
- (id)opacity;
- (void).cxx_destruct;
- (id)bgColor;
- (void)setBgColor:;
- (void)setBgImage:;
- (id)bgImage;
+ (id)bgColorCustomTransformWithValue:;
+ (id)propertyKeyWithJSONKey;
@end
