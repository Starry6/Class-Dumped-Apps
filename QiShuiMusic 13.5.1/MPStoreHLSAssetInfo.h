@interface MPStoreHLSAssetInfo : NSObject
@property (nonatomic) NSURL playlistURL;
@property (nonatomic) NSURL keyCertificateURL;
@property (nonatomic) NSURL keyServerURL;
@property (nonatomic) NSString keyServerProtocolType;
@property (nonatomic) NSNumber keyServerAdamID;
@property (nonatomic) NSURL alternatePlaylistURL;
@property (nonatomic) NSURL alternateKeyCertificateURL;
@property (nonatomic) NSURL alternateKeyServerURL;
@property (nonatomic) BOOL iTunesStoreStream;
- (void).cxx_destruct;
- (id)keyServerURL;
- (id)initWithiTunesCloudStoreHLSAssetInfo:;
- (id)playlistURL;
- (id)keyCertificateURL;
- (id)keyServerProtocolType;
- (id)keyServerAdamID;
- (id)alternatePlaylistURL;
- (id)alternateKeyCertificateURL;
- (id)alternateKeyServerURL;
- (BOOL)isiTunesStoreStream;
@end
