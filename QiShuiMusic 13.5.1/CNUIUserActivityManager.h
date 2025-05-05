@interface CNUIUserActivityManager : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) <CNLSApplicationWorkspace> applicationWorkspace;
@property (nonatomic) <CNUIInteractionDonor> interactionDonor;
- (void)updateUserActivityState:withContentsOfContact:;
- (id)makeActivityAdvertisingViewingOfContact:;
- (id)initWithContactStore:applicationWorkspace:interactionDonor:;
- (void)publishRequestToEditContact:;
- (id)initWithApplicationWorkspace:;
- (id)makeActivityAdvertisingViewingGroups;
- (id)interactionDonor;
- (void)updateUserActivityState:withContentsOfListTopContact:displayedContact:searchString:isShowingGroups:;
- (id)initWithContactStore:applicationWorkspace:;
- (void).cxx_destruct;
- (id)contactStore;
- (id)makeActivityAdvertisingViewingList;
- (void)publishRequestToCreateContact:;
- (id)initWithContactStore:;
- (id)applicationWorkspace;
+ (id)log;
+ (id)descriptorForRequiredKeys;
@end
