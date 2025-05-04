@interface AWEDPlayerVideoModel : AWEBaseApiModel
@property (nonatomic) AWEDPlayerVideoInfoModel video;
@property (nonatomic) NSArray remoteVideoUrlArray;
@property (nonatomic) NSArray localVideoUrlArray;
@property (nonatomic) NSString videoDecryptionKey;
- (id)localVideoUrlArray;
- (id)videoDecryptionKey;
- (id)remoteVideoUrlArray;
- (void)setLocalVideoUrlArray:;
- (void)setVideoDecryptionKey:;
- (void)setRemoteVideoUrlArray:;
- (id)video;
- (void)setVideo:;
- (void).cxx_destruct;
@end
