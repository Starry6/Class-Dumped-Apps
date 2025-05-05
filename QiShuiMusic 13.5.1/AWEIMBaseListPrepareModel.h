@interface AWEIMBaseListPrepareModel : NSObject
@property (nonatomic) NSArray recentShareModel;
@property (nonatomic) NSArray friendContacts;
@property (nonatomic) NSArray allContacts;
@property (nonatomic) NSArray liveAdminContacts;
- (id)friendContacts;
- (id)liveAdminContacts;
- (id)recentShareModel;
- (void)setFriendContacts:;
- (void)setLiveAdminContacts:;
- (void)setRecentShareModel:;
- (id)allContacts;
- (void).cxx_destruct;
- (void)setAllContacts:;
@end
