@interface PHLivePhotoExportSession : NSObject
@property (nonatomic) NSArray fileURLs;
@property (nonatomic) NSURL imageURL;
@property (nonatomic) NSURL videoURL;
- (id)videoURL;
- (id)fileURLs;
- (void)setVideoURL:;
- (void).cxx_destruct;
- (void)setImageURL:;
- (id)imageURL;
- (id)initWithResourceFileURLs:;
- (id)writeToFileURL:options:completionHandler:;
- (BOOL)_isOutputURLValid:withOptions:error:;
+ (BOOL)_identifyResourceURLs:outImageURL:outVideoURL:error:;
+ (BOOL)_canCreateLivePhotoWithURLs:outError:;
@end
