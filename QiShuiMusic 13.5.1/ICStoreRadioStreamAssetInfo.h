@interface ICStoreRadioStreamAssetInfo : NSObject
@property (nonatomic) q flavor;
@property (nonatomic) q streamProtocol;
@property (nonatomic) NSURL streamURL;
@property (nonatomic) NSURL keyCertificateURL;
@property (nonatomic) NSURL keyServerURL;
@property (nonatomic) BOOL iTunesStoreStream;
- (void).cxx_destruct;
- (long long)flavor;
- (id)keyServerURL;
- (id)copyWithZone:;
- (id)initWithItemResponseDictionary:;
- (id)keyCertificateURL;
- (BOOL)isiTunesStoreStream;
- (long long)streamProtocol;
- (id)streamURL;
- (long long)ICStoreRadioStreamFlavorWithString:;
- (long long)ICStoreRadioStreamProtocolWithString:;
@end
