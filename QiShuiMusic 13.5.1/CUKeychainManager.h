@interface CUKeychainManager : NSObject
- (BOOL)addItem:flags:error:;
- (id)addItem:returnFlags:error:;
- (id)copyItemsMatchingItem:flags:error:;
- (BOOL)updateItem:matchingItem:flags:error:;
- (BOOL)addItem:error:;
- (id)_copyItemsMatchingItemSeparate:flags:error:;
- (id)copyItemMatchingItem:flags:error:;
- (BOOL)addOrUpdateOrReAddItem:flags:logCategory:logLabel:error:;
- (id)_copyItemsMatchingItem:flags:error:;
- (BOOL)removeItemMatchingItem:flags:error:;
- (BOOL)addOrUpdateOrReAddItem:logCategory:logLabel:error:;
- (BOOL)updateItem:matchingItem:error:;
- (BOOL)removeItemMatchingItem:error:;
@end
