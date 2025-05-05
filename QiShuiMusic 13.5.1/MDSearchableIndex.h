@interface MDSearchableIndex : CSSearchableIndex
- (void)performIndexJob:protectionClass:acknowledgementHandler:;
- (void)indexSearchableItems:stateInfo:completionHandler:;
+ (id)sharedInstance;
@end
