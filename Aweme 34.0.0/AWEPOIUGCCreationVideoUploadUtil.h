@interface AWEPOIUGCCreationVideoUploadUtil : NSObject
@property (nonatomic) AWEPOICommentUploadVideoTokenModel videoToken;
- (void)uploadVideoWithFileURL:materialID:bridgeContext:completion:;
- (void)prefetchVideoToken;
- (void)uploadVideoByTokenWithFileURL:materialID:bridgeContext:completion:;
- (void)compressVideo:materialID:bridgeContext:completion:;
- (void)compressProgress:materialID:bridgeContext:;
- (void).cxx_destruct;
- (void)setVideoToken:;
- (id)videoToken;
+ (id)videoHostName;
@end
