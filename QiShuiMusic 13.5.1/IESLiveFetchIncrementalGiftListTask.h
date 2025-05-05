@interface IESLiveFetchIncrementalGiftListTask : NSObject
@property (nonatomic) NSNumber pageType;
@property (nonatomic) <IESLiveGiftPanelDataSourceDelegate> delegate;
@property (nonatomic) IESLiveCountTimer timer;
@property (nonatomic) BOOL running;
@property (nonatomic) double taskInterval;
- (void)fetchIncrementalGiftList;
- (id)initWithPageType:delegate:;
- (void)setTaskInterval:;
- (void)startTask;
- (void)dealloc;
- (void)setDelegate:;
- (void)setRunning:;
- (BOOL)running;
- (void)setTimer:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setPageType:;
- (id)timer;
- (id)pageType;
- (double)taskInterval;
- (void)stopTask;
@end
