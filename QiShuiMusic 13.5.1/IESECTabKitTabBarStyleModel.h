@interface IESECTabKitTabBarStyleModel : MTLModel
@property (nonatomic) Q fontSize;
@property (nonatomic) Q fontWeight;
@property (nonatomic) Q imageWidth;
@property (nonatomic) Q imageHeight;
@property (nonatomic) NSString titleColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFontWeight:;
- (id)init;
- (void)setTitleColor:;
- (unsigned long long)fontWeight;
- (id)titleColor;
- (unsigned long long)fontSize;
- (void).cxx_destruct;
- (void)setFontSize:;
- (unsigned long long)imageWidth;
- (unsigned long long)imageHeight;
- (void)setImageHeight:;
- (void)setImageWidth:;
+ (id)JSONKeyPathsByPropertyKey;
@end
