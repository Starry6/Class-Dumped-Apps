@interface IESRegularFileDownloadTask : IESEffectBaseDownloadTask
@property (nonatomic) NSArray downloadURLs;
- (id)downloadURLs;
- (id)initWithFileDownloadURLs:destination:;
- (void)setDownloadURLs:;
- (void)startWithCompletion:;
- (void).cxx_destruct;
@end
