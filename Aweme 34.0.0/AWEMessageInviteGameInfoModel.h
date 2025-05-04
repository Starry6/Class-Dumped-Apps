@interface AWEMessageInviteGameInfoModel : NSObject
@property (nonatomic) NSString gameName;
@property (nonatomic) q inviteFrom;
@property (nonatomic) NSURL coverImageURL;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString gameID;
@property (nonatomic) Q version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gameName;
- (void)setGameName:;
- (id)gameID;
- (void)setGameID:;
- (long long)inviteFrom;
- (void)setInviteFrom:;
- (id)scheme;
- (void)setScheme:;
- (id)roomID;
- (unsigned long long)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (void)setRoomID:;
- (id)coverImageURL;
- (void)setCoverImageURL:;
@end
