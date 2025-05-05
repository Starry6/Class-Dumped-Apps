@interface IMINInteractionUtilities : NSObject
@property (nonatomic) CSSearchableIndex searchableIndex;
- (id)init;
- (void)dealloc;
- (void)setSearchableIndex:;
- (id)searchableIndex;
- (void)deleteInteractionsWithChatGUIDs:;
- (void)deleteInteractionsWithMessageGUIDs:;
+ (id)sharedInstance;
@end
