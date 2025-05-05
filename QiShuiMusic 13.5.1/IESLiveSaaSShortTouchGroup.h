@interface IESLiveSaaSShortTouchGroup : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) NSNumber priority;
@property (nonatomic) NSMutableArray allTypes;
@property (nonatomic) NSArray allItems;
- (void)insertToFont:;
- (long long)removeItem:;
- (id)allItems;
- (void)setPriority:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)allTypes;
- (id)priority;
- (void)reloadItems;
- (void)setAllItems:;
- (void)setAllTypes:;
+ (id)groupWithPriority:;
@end
