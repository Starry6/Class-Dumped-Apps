@interface AWECommentTabService : NSObject
- (id)makeTabManager:;
- (BOOL)multiTabs:;
- (BOOL)containsTab:type:;
- (id)init;
@end
