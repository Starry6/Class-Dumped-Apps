@interface AFClockItemStorage : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q generation;
@property (nonatomic) NSDate date;
@property (nonatomic) NSDictionary itemsByID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)endGroupingWithOptions:;
- (void)deleteAllItems;
- (void)deleteItemsWithIDs:;
- (id)identifier;
- (void)insertOrUpdateItems:;
- (void)beginGrouping;
- (id)date;
- (id)itemsByID;
- (id)initWithIdentifier:delegate:;
- (void)setGeneration:;
- (void).cxx_destruct;
- (void)setDate:;
- (id)itemWithID:;
- (unsigned long long)generation;
- (void)invalidate;
- (void)setItemsByID:;
@end
