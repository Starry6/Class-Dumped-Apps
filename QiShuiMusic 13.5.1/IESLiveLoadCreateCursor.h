@interface IESLiveLoadCreateCursor : IESLiveLoadBaseCursor
@property (nonatomic) NSMutableArray models;
@property (nonatomic) IESLiveBootloaderTaskItem taskItem;
@property (nonatomic) double startTime;
- (id)levelOrStage;
- (id)realArray;
- (void)runCallback:;
- (void)setTaskItem:;
- (id)taskItem;
- (void)setModels:;
- (void)setStartTime:;
- (void)finish;
- (id)models;
- (double)startTime;
- (void)clear;
- (void).cxx_destruct;
@end
