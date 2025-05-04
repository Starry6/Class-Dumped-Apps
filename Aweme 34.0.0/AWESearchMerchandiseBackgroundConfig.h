@interface AWESearchMerchandiseBackgroundConfig : AWEBaseApiModel
@property (nonatomic) NSString backgroundType;
@property (nonatomic) AWESearchMerchandiseBackgroundGradient gradient;
@property (nonatomic) AWESearchMerchandiseBackgroundColor color;
- (void)setGradient:;
- (id)gradient;
- (void)setBackgroundType:;
- (id)color;
- (void)setColor:;
- (void).cxx_destruct;
- (id)backgroundType;
+ (id)JSONKeyPathsByPropertyKey;
@end
