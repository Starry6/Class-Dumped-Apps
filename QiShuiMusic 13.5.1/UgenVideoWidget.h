@interface UgenVideoWidget : UgenWidget
@property (nonatomic) NSDictionary onVideoPause;
@property (nonatomic) NSDictionary onVideoResume;
@property (nonatomic) NSDictionary onVideoFinish;
@property (nonatomic) NSDictionary onVideoProgress;
- (id)onVideoProgress;
- (void)currentTime:totalTime:state:;
- (BOOL)needListenVideoProgress;
- (id)onVideoFinish;
- (id)onVideoPause;
- (id)onVideoResume;
- (void)setOnVideoFinish:;
- (void)setOnVideoPause:;
- (void)setOnVideoProgress:;
- (void)setOnVideoResume:;
- (void)finish;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
@end
