@interface AWESearchBlankCardModel : AWEBaseApiModel
@property (nonatomic) double height;
@property (nonatomic) double screenWidth;
- (void)setHeight:;
- (void)setScreenWidth:;
- (double)screenWidth;
- (double)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
