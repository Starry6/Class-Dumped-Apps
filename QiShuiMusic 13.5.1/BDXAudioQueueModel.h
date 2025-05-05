@interface BDXAudioQueueModel : NSObject
@property (nonatomic) NSString queueID;
@property (nonatomic) BDXAudioModel currentPlayModel;
@property (nonatomic) NSArray playModelArray;
@property (nonatomic) q currentIndex;
@property (nonatomic) Q loopMode;
@property (nonatomic) BOOL isBackground;
- (void)appendAudioModels:;
- (BOOL)canGoNext;
- (BOOL)canGoPrev;
- (id)currentPlayModel;
- (id)findModelWithStep:;
- (void)goNext;
- (void)goPrev;
- (id)initWithModels:queueId:;
- (unsigned long long)loopMode;
- (id)playModelArray;
- (void)setLoopMode:;
- (void)setupWithModels:;
- (BOOL)updateCurrentModel:;
- (BOOL)isBackground;
- (void)setIsBackground:;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)queueID;
@end
