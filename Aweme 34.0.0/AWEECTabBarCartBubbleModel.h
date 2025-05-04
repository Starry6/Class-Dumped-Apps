@interface AWEECTabBarCartBubbleModel : MTLModel
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString text;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSDictionary bizParams;
@property (nonatomic) NSString exposureParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizParams;
- (void)setBizParams:;
- (id)exposureParams;
- (void)setExposureParams:;
- (id)icon;
- (void)setText:;
- (void)setDuration:;
- (id)text;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)duration;
+ (id)JSONKeyPathsByPropertyKey;
@end
