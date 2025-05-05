@interface VKCQuickActionsProcessor : NSObject
+ (void)quickActionsFromElements:unfilteredElements:queue:completionHandler:;
+ (long long)sortOrderForElement:;
+ (id)dedupeQuickActions:;
+ (id)sortQuickActions:;
+ (id)configureQuickActionForTuple:unfilteredTextElements:;
@end
