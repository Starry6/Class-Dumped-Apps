@interface AWEUserRecommendContactManager : NSObject
@property (nonatomic) BOOL hasContactFriendsCellClosed;
@property (nonatomic) BOOL hasContactFriendsCellShowed;
@property (nonatomic) NSString enterFromOnCallAddressBook;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFromOnCallAddressBook:;
- (void)saveEnterFromOnCallAddressBook:;
- (id)enterFromOnCallAddressBook;
- (long long)contactFriendsCellIndex:;
- (BOOL)hasContactFriendsCellClosed;
- (BOOL)hasContactFriendsCellShowed;
- (void)setHasContactFriendsCellShowed:;
- (void)setHasContactFriendsCellClosed:;
- (BOOL)canShowContactFriendsCell:;
- (void)showContactFriendsCell:;
- (void)closeContactFriendsCell:;
- (void)clickContactFriendsCell:;
- (id)checkCellArrayNeedContactFriends:contactIndex:;
- (id)updateContactModelInArray:contactIndex:;
- (void).cxx_destruct;
+ (BOOL)canShowContactFriendsCellCommonCondition;
+ (id)contactFriendModel;
+ (id)sharedInstance;
@end
