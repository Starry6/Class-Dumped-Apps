@interface IESLiveBootloaderTaskItem : NSObject
@property (nonatomic) BOOL finished;
@property (nonatomic) NSArray models;
@property (nonatomic) Q stage;
@property (nonatomic) double taskLoadDuration;
@property (nonatomic) @? callback;
@property (nonatomic) @? endComplete;
- (void)setEndComplete:;
- (id)endComplete;
- (void)setTaskLoadDuration:;
- (double)taskLoadDuration;
- (unsigned long long)stage;
- (id)callback;
- (void)setFinished:;
- (void)setModels:;
- (void)setCallback:;
- (BOOL)finished;
- (void)setStage:;
- (id)models;
- (void).cxx_destruct;
@end
