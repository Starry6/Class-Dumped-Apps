@interface AWEFavoriteSegmentedItem : IESSegmentedItem
@property (nonatomic) NSString itemTitle;
@property (nonatomic) NSString itemSelectedTitle;
@property (nonatomic) UIImage itemImage;
@property (nonatomic) UIImage itemSelectedImage;
@property (nonatomic) NSDictionary textAttributes;
@property (nonatomic) NSDictionary selectedTextAttributes;
@property (nonatomic) AWEFavoriteSegmentedItemLayoutInfo layoutInfo;
- (id)calculatedTextDynamicSize:titleAttributes:;
- (void)updateItemWithTitle:selectedTitle:image:selectedImage:;
+ (id)itemWithTitle:selectedTitle:image:selectedImage:layoutInfo:;
+ (id)itemWithTitle:layoutInfo:;
+ (id)itemWithTitle:image:layoutInfo:;
@end
