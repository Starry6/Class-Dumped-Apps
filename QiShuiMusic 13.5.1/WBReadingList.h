@interface WBReadingList : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)addReadingListItemWithURL:title:previewText:error:;
+ (id)defaultReadingList;
+ (BOOL)supportsURL:;
@end
