@interface AWEIMExchangeCameraBusinessConfiguration : NSObject
@property (nonatomic) <ACCCreationSessionModel> sessionModel;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) BOOL isActivityScene;
@property (nonatomic) BOOL isToAlbumRandom;
@property (nonatomic) BOOL isOnlyExchangeLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentClassArray;
- (void)setIsOnlyExchangeLocation:;
- (BOOL)isOnlyExchangeLocation;
- (id)initWithSessionModel:;
- (id)sessionModel;
- (id)businessSceneServiceProvider;
- (void)setSessionModel:;
- (void)setIsActivityScene:;
- (void)setIsToAlbumRandom:;
- (BOOL)isToAlbumRandom;
- (id)initWithSessionModel:conversation:isActivityScene:isToAlbumRandom:isOnlyExchangeLocation:;
- (BOOL)isActivityScene;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end
