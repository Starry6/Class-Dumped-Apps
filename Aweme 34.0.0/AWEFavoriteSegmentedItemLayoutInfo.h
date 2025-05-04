@interface AWEFavoriteSegmentedItemLayoutInfo : IESSegmentedItemLayoutInfo
@property (nonatomic) Q imageType;
@property (nonatomic) Q contentPosition;
- (void)calculateItemLayout:widthStyle:itemsCount:textSize:;
- (void)calculateContentFrame:width:widthStyle:textSize:;
- (void)setImageType:;
- (unsigned long long)imageType;
- (unsigned long long)contentPosition;
- (void)setContentPosition:;
+ (id)defaultConfig;
@end
