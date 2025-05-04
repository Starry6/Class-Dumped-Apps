@interface AWENearbyAttributedLabelImageModel : AWENearbyAttributedLabelBaseModel
@property (nonatomic) AWENearbyGrouponBubbleModelContentImgUrl imgUrl;
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger width;
@property (nonatomic) double cornerRadius;
- (id)imgUrl;
- (void)setImgUrl:;
- (id)init;
- (void)setHeight:;
- (void)setWidth:;
- (void)setCornerRadius:;
- (int)width;
- (void).cxx_destruct;
- (double)cornerRadius;
- (int)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
