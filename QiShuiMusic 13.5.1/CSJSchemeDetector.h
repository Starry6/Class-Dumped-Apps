@interface CSJSchemeDetector : NSObject
@property (nonatomic) Q activity;
@property (nonatomic) NSArray schemeList;
@property (nonatomic) q state;
@property (nonatomic) Q currentIndex;
@property (nonatomic) NSMutableArray successList;
@property (nonatomic) NSMutableArray failureList;
@property (nonatomic) ^{__CFRunLoopObserver=} observer;
@property (nonatomic) @? completion;
- (void)setFailureList:;
- (void)setSuccessList:;
- (void)checkScheme;
- (id)failureList;
- (void)reportList;
- (id)schemeList;
- (void)setSchemeList:;
- (id)successList;
- (id)completion;
- (void)setCompletion:;
- (id)init;
- (void)start:;
- (void)dealloc;
- (void)setState:;
- (void)setActivity:;
- (void)setCurrentIndex:;
- (unsigned long long)activity;
- (long long)state;
- (void)setObserver:;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (id)observer;
@end
