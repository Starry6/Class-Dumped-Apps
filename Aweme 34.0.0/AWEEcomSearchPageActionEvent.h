@interface AWEEcomSearchPageActionEvent : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) NSDictionary commonParameters;
@property (nonatomic) Q pageState;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) q reSearchCount;
- (id)commonParameters;
- (void)setCommonParameters:;
- (long long)reSearchCount;
- (void)setReSearchCount:;
- (void)endWithCardIndexVisibleMax:cardCountVisible:;
- (void)setStartTime:;
- (void).cxx_destruct;
- (double)startTime;
- (void)start;
- (BOOL)hasAction;
- (void)setHasAction:;
- (unsigned long long)pageState;
- (void)setPageState:;
@end
