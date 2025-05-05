@interface CNUIDefaultUserActionFetcher : NSObject
@property (nonatomic) CRRecentContactsLibrary library;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)library;
- (void).cxx_destruct;
- (id)observableForDefaultActionsChanged;
- (id)defaultActionItemForActionItems:schedulerProvider:;
- (id)initWithRecentsLibrary:;
+ (id)recentContactsForUserActionItem:recentsLibrary:scheduler:;
+ (id)queryForUserActionItem:;
+ (id)defaultActionItemForActionItem:recentContacts:;
+ (BOOL)doesRecentContact:matchUserActionItem:;
@end
