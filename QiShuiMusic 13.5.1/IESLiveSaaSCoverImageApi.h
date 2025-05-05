@interface IESLiveSaaSCoverImageApi : HTSLiveApi
@property (nonatomic) double lastUploadImageTime;
@property (nonatomic) double lastRequestImageQualityTime;
- (void)setLastRequestImageQualityTime:;
- (void)fetchCoverImage:completion:;
- (double)lastRequestImageQualityTime;
- (double)lastUploadImageTime;
- (void)setLastUploadImageTime:;
- (void)uploadCoverImage:image:completion:;
- (void)uploadCoverImage:parameters:completion:;
@end
