@interface CNUIUserActivityRestorer : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) NSString activityTypeCreateContactIntent;
@property (nonatomic) NSString activityTypeSpotlightQueryContinuation;
@property (nonatomic) NSString activityTypeSpotlightSearchableItem;
@property (nonatomic) <CNUIUserActivityRestorerDelegate> delegate;
@property (nonatomic) NSSet restorableActivityTypes;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:;
- (BOOL)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:;
- (BOOL)restoreUserActivity:;
- (BOOL)restoreViewingContact:;
- (BOOL)restoreEditingContact:;
- (BOOL)restoreViewingList:;
- (BOOL)restoreViewingGroups:;
- (BOOL)restoreSpotlightQueryContinuation:;
- (BOOL)restoreSpotlightSearchableItem:;
- (BOOL)restoreCreateContactIntent:;
- (id)restorableActivityTypes;
- (id)activityTypeCreateContactIntent;
- (id)activityTypeSpotlightQueryContinuation;
- (id)activityTypeSpotlightSearchableItem;
+ (id)log;
@end
