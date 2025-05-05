@interface AWEIMGameRoomContentModel : NSObject
@property (nonatomic) NSString gameName;
@property (nonatomic) q inviteFrom;
@property (nonatomic) NSURL coverImageURL;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString gameID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gameName;
- (long long)inviteFrom;
- (void)setGameID:;
- (void)setGameName:;
- (void)setInviteFrom:;
- (void)setScheme:;
- (id)scheme;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
- (void)setCoverImageURL:;
- (id)coverImageURL;
- (id)gameID;
@end
