@interface AWEMediaDownloadResultItem : NSObject
@property (nonatomic) q result;
@property (nonatomic) NSError error;
@property (nonatomic) NSString errorMessage;
@property (nonatomic) UIImage image;
@property (nonatomic) NSURL sandboxFileURL;
@property (nonatomic) NSURL videoAssetURL;
@property (nonatomic) NSURL videoALAssetURL;
@property (nonatomic) NSArray images;
- (id)videoALAssetURL;
- (id)sandboxFileURL;
- (void)setSandboxFileURL:;
- (void)setVideoALAssetURL:;
- (long long)result;
- (void)setError:;
- (void)setImage:;
- (id)error;
- (id)images;
- (id)errorMessage;
- (void).cxx_destruct;
- (void)setImages:;
- (id)image;
- (void)setResult:;
- (void)setErrorMessage:;
- (id)videoAssetURL;
- (void)setVideoAssetURL:;
@end
