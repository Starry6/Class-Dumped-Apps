@interface AWEFormatTraceSpanInfo : NSObject
@property (nonatomic) NSMutableDictionary extraParams;
@property (nonatomic) NSString key;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL isFinished;
- (void)setExtraParams:;
- (id)extraParams;
- (void)resetSpan;
- (void)appendExtraParams:;
- (id)getExtraParams;
- (BOOL)valid;
- (void)setStartTime:;
- (void)setKey:;
- (double)endTime;
- (void)setEndTime:;
- (id)key;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (double)startTime;
- (id)initWithKey:;
- (void)setIsFinished:;
@end
