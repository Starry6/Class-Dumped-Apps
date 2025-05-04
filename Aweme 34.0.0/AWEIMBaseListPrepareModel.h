@interface AWEIMBaseListPrepareModel : NSObject
@property (nonatomic) NSArray recentShareModel;
@property (nonatomic) NSArray friendContacts;
@property (nonatomic) NSArray allContacts;
@property (nonatomic) NSArray liveAdminContacts;
@property (nonatomic) NSArray commonEntranceModels;
- (void)setLiveAdminContacts:;
- (id)liveAdminContacts;
- (void)setRecentShareModel:;
- (void)setCommonEntranceModels:;
- (id)recentShareModel;
- (id)friendContacts;
- (void)setFriendContacts:;
- (id)commonEntranceModels;
- (id)allContacts;
- (void).cxx_destruct;
- (void)setAllContacts:;
@end
