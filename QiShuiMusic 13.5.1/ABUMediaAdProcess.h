@interface ABUMediaAdProcess : NSObject
@property (nonatomic) double startRequestTimeInterval;
@property (nonatomic) q ritReqType;
@property (nonatomic) BOOL isMockDownloadCallback;
@property (nonatomic) BOOL isShowAgain;
@property (nonatomic) BOOL didDownloadVideo;
- (void)setIsShowAgain:;
- (BOOL)didDownloadVideo;
- (BOOL)isMockDownloadCallback;
- (BOOL)isShowAgain;
- (long long)ritReqType;
- (void)setDidDownloadVideo:;
- (void)setIsMockDownloadCallback:;
- (void)setRitReqType:;
- (void)setStartRequestTimeInterval:;
- (double)startRequestTimeInterval;
@end
