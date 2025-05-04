@interface AWEIMAwemeMediaDisplayModel : NSObject
@property (nonatomic) q mediaType;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) BOOL isCombineMessage;
@property (nonatomic) AWEIMCodeGenFriendsAlbumMediaInfoModel friendsAlbumAsset;
@property (nonatomic) BOOL forbideDelete;
- (void)setFriendsAlbumAsset:;
- (id)friendsAlbumAsset;
- (BOOL)isIMMedia;
- (BOOL)isCombineMessage;
- (void)setIsCombineMessage:;
- (BOOL)forbideDelete;
- (void)setForbideDelete:;
- (void)setMediaType:;
- (id)message;
- (void)encodeWithCoder:;
- (id)contentType;
- (long long)mediaType;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)initWithCoder:;
@end
