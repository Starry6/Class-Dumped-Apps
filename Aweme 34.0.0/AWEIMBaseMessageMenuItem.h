@interface AWEIMBaseMessageMenuItem : NSObject
@property (nonatomic) AWEIMMessageBaseTableViewCell cell;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)cell;
- (void)setCell:;
+ (unsigned long long)menuItemType;
+ (void)doMessageMenuAction:;
+ (id)menuItemTitle:;
+ (id)menuItemImageName:;
+ (id)menuItemLightImageURL:;
+ (id)menuItemDarkImageURL:;
+ (id)trackerName:;
@end
