@interface AWEVideoCoverAIReframeManager : NSObject
@property (nonatomic) VEAlgorithmSession algSession;
- (void)setAlgSession:;
- (id)algSession;
- (BOOL)isAiFrameModelDownload;
- (void)handleCoverImages:reFrameRatio:needCroppedImage:completion:;
- (void)fetchAiFrameModel;
- (id)cropImage:rect:;
- (id)init;
- (void)cancel;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
