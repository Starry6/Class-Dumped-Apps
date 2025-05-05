@interface CNUIUserActionItemList : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) UIImage icon;
@property (nonatomic) NSArray items;
- (id)items;
- (id)icon;
- (id)type;
- (void).cxx_destruct;
- (id)initWithItems:type:icon:;
@end
