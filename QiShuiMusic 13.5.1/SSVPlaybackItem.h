@interface SSVPlaybackItem : NSObject
@property (nonatomic) NSURL fallbackStreamingKeyServerURL;
@property (nonatomic) NSURL fallbackStreamingKeyCertificateURL;
@property (nonatomic) NSDictionary itemDictionary;
@property (nonatomic) @ itemIdentifier;
@property (nonatomic) NSArray assets;
@property (nonatomic) NSURL HLSPlaylistURL;
@property (nonatomic) NSURL HLSKeyCertificateURL;
@property (nonatomic) NSURL HLSKeyServerURL;
@property (nonatomic) BOOL iTunesStoreStream;
- (id)itemIdentifier;
- (id)assets;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)itemDictionary;
- (BOOL)isiTunesStoreStream;
- (id)fallbackStreamingKeyServerURL;
- (void)setFallbackStreamingKeyServerURL:;
- (id)fallbackStreamingKeyCertificateURL;
- (void)setFallbackStreamingKeyCertificateURL:;
- (id)initWithItemDictionary:;
- (id)assetForFlavor:;
- (id)HLSKeyCertificateURL;
- (id)HLSKeyServerURL;
- (id)HLSPlaylistURL;
- (void)_enumerateAssetsUsingBlock:;
@end
