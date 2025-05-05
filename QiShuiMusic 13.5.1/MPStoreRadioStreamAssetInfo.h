@interface MPStoreRadioStreamAssetInfo : NSObject
@property (nonatomic) q flavor;
@property (nonatomic) q streamProtocol;
@property (nonatomic) NSURL streamURL;
@property (nonatomic) NSURL keyCertificateURL;
@property (nonatomic) NSURL keyServerURL;
@property (nonatomic) BOOL iTunesStoreStream;
- (void).cxx_destruct;
- (long long)flavor;
- (id)keyServerURL;
- (id)keyCertificateURL;
- (BOOL)isiTunesStoreStream;
- (id)initWithiTunesCloudStoreRadioStreamAssetInfo:;
- (long long)streamProtocol;
- (id)streamURL;
- (BOOL)isITunesStoreStream;
- (long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:;
- (long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:;
- (void)setITunesStoreStream:;
@end
