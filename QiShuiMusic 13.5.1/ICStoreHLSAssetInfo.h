@interface ICStoreHLSAssetInfo : NSObject
@property (nonatomic) NSURL playlistURL;
@property (nonatomic) NSURL keyCertificateURL;
@property (nonatomic) NSURL keyServerURL;
@property (nonatomic) NSString keyServerProtocolType;
@property (nonatomic) NSNumber keyServerAdamID;
@property (nonatomic) BOOL iTunesStoreStream;
@property (nonatomic) NSSet audioTraits;
@property (nonatomic) NSURL alternatePlaylistURL;
@property (nonatomic) NSURL alternateKeyCertificateURL;
@property (nonatomic) NSURL alternateKeyServerURL;
- (id)audioTraits;
- (void).cxx_destruct;
- (id)keyServerURL;
- (id)copyWithZone:;
- (id)initWithItemResponseDictionary:;
- (id)playlistURL;
- (id)keyCertificateURL;
- (id)keyServerProtocolType;
- (id)keyServerAdamID;
- (id)alternatePlaylistURL;
- (id)alternateKeyCertificateURL;
- (id)alternateKeyServerURL;
- (BOOL)isiTunesStoreStream;
- (void)setITunesStoreStream:;
- (void)setKeyCertificateURL:;
- (void)setKeyServerURL:;
- (void)setPlaylistURL:;
- (void)setKeyServerProtocolType:;
- (void)setKeyServerAdamID:;
- (void)setAudioTraits:;
@end
