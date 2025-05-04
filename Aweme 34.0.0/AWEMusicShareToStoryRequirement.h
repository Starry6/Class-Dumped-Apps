@interface AWEMusicShareToStoryRequirement : NSObject
@property (nonatomic) <AWEStudioMusicModelProtocol> music;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) UIImage compressedCoverImage;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) BOOL didUserCanceled;
@property (nonatomic) @? completionHandler;
- (void)setCoverImage:;
- (BOOL)isVaild;
- (id)compressedCoverImage;
- (void)setCompressedCoverImage:;
- (BOOL)didUserCanceled;
- (void)setDidUserCanceled:;
- (id)music;
- (void)setMusic:;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)setCompletionHandler:;
- (id)coverImage;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
