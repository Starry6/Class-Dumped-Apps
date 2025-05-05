@interface RACReplaySubject : RACSubject
@property (nonatomic) Q capacity;
@property (nonatomic) NSMutableArray valuesReceived;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL hasError;
@property (nonatomic) NSError error;
- (void)sendCompleted;
- (void)sendError:;
- (void)sendNext:;
- (id)valuesReceived;
- (unsigned long long)capacity;
- (BOOL)hasError;
- (id)init;
- (void)setError:;
- (void)setHasError:;
- (id)subscribe:;
- (id)error;
- (void).cxx_destruct;
- (id)initWithCapacity:;
- (void)setHasCompleted:;
- (BOOL)hasCompleted;
+ (id)replaySubjectWithCapacity:;
@end
