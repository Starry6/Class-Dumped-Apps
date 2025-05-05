@interface VSKeychainStore : NSObject
- (id)addItem:error:;
- (id)findItemsMatchingQuery:error:;
- (BOOL)updateAttributes:ofItemsMatchingQuery:error:;
- (BOOL)deleteItemsMatchingQuery:error:;
- (BOOL)_fixUpdateConflictForItemWithAttributes:andAttributesToUpdate:;
@end
