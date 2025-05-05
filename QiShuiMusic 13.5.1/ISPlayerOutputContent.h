@interface ISPlayerOutputContent : NSObject
@property (nonatomic) ^{CGImage=} photo;
@property (nonatomic) BOOL photoIsOriginal;
@property (nonatomic) NSInteger photoEXIFOrientation;
@property (nonatomic) ISWrappedAVPlayer videoPlayer;
@property (nonatomic) {CGSize=dd} videoSize;
- (id)videoPlayer;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)photo;
- (id)videoSize;
- (int)photoEXIFOrientation;
- (BOOL)photoIsOriginal;
- (id)initWithPhoto:photoIsOriginal:photoEXIFOrientation:videoPlayer:videoSize:;
@end
