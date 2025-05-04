@interface AWECommentMediaDownloadOptions : AWEMediaDownloadOptions
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) Q commentDownloadType;
@property (nonatomic) Q indexToDownload;
- (id)commentModel;
- (void)setCommentModel:;
- (void)setIndexToDownload:;
- (void)setCommentDownloadType:;
- (unsigned long long)commentDownloadType;
- (unsigned long long)indexToDownload;
- (void).cxx_destruct;
@end
