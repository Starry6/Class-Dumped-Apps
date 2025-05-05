@interface PHLivePhotoCreationOperation : NSOperation
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) q contentMode;
@property (nonatomic) NSArray resourceURLs;
@property (nonatomic) @? resultHandler;
- (long long)contentMode;
- (void)main;
- (id)targetSize;
- (void).cxx_destruct;
- (id)resultHandler;
- (id)initWithResourceURLs:targetSize:contentMode:resultHandler:;
- (id)_createImageOnlyLivePhotoWithImageURL:;
- (id)resourceURLs;
@end
