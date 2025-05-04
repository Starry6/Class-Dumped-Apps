@interface AWEIMGroupListSortingMenuViewItemModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isSelected;
- (id)initWithTitle:isSelected:;
- (void)configWithIsSelected:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
