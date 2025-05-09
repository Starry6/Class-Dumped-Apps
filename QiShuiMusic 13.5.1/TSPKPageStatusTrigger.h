@interface TSPKPageStatusTrigger : TSPKDetectTrigger
@property (nonatomic) NSString pageName;
@property (nonatomic) BOOL carePageAppear;
@property (nonatomic) BOOL carePageDisappear;
@property (nonatomic) double detectTimeDelay;
@property (nonatomic) BOOL isGrayScale;
@property (nonatomic) TSPKDelayDetectSchduler delayScheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)detectTimeDelay;
- (void)executeDetectWithActualTimeGap:;
- (void)setIsGrayScale:;
- (void)addNotifications;
- (void)cancelDetectAction;
- (BOOL)carePageAppear;
- (BOOL)carePageDisappear;
- (void)decodeParams:;
- (id)getComparePage;
- (void)handlePageStatusChangeNotification:;
- (BOOL)isGrayScale;
- (void)pageStatusChangeForDetectAction:;
- (void)scheduleDetectAction;
- (void)setCarePageAppear:;
- (void)setCarePageDisappear:;
- (void)setDelayScheduler:;
- (void)setDetectTimeDelay:;
- (void)dealloc;
- (void)setup;
- (id)delayScheduler;
- (void).cxx_destruct;
- (void)removeNotifications;
- (void)pageDidDisappear:;
- (void)setPageName:;
- (id)pageName;
- (void)pageDidAppear:;
@end
