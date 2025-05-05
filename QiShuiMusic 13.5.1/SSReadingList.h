@interface SSReadingList : NSObject
- (id)init;
- (void)_setUpConnectionIfNeeded;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)addReadingListItemWithURL:title:previewText:error:;
- (BOOL)_addReadingListItemWithURL:title:previewText:;
+ (id)defaultReadingList;
+ (BOOL)supportsURL:;
@end
