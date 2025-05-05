@interface INRelevantShortcutStore : NSObject
@property (nonatomic) CSSearchableIndex index;
- (void)setRelevantShortcuts:completionHandler:;
- (id)index;
- (id)initWithSearchableIndex:;
- (void).cxx_destruct;
+ (id)defaultStore;
@end
