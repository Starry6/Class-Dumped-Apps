@interface AWEHomepageTopBarTabItemInfo : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) BOOL selected;
@property (nonatomic) double itemWidth;
@property (nonatomic) NSString itemType;
@property (nonatomic) {UIEdgeInsets=dddd} itemPadding;
@property (nonatomic) UIFont tabFont;
@property (nonatomic) double showPercentage;
- (id)itemPadding;
- (double)showPercentage;
- (void)setShowPercentage:;
- (void)setItemPadding:;
- (id)tabFont;
- (void)setTabFont:;
- (id)itemType;
- (void)setItemType:;
- (void)setItemWidth:;
- (double)itemWidth;
- (void).cxx_destruct;
- (id)title;
- (BOOL)selected;
- (void)setTitle:;
- (void)setSelected:;
@end
