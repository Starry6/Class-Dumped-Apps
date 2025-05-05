@interface GEOMutableURLQueryItems : NSObject
@property (nonatomic) NSMutableArray items;
- (id)initWithItems:;
- (void)addItem:;
- (id)init;
- (void)addItemWithName:value:;
- (id)items;
- (void)addItemWithName:uint64Value:;
- (void)addItemsFromArray:;
- (void)addItemWithName:intValue:;
- (void).cxx_destruct;
- (void)addItemWithName:uintValue:;
@end
