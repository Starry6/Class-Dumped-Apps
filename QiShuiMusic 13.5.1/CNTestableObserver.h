@interface CNTestableObserver : NSObject
@property (nonatomic) NSArray results;
@property (nonatomic) NSArray resultValues;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)observerDidReceiveResult:;
- (void)observerDidFailWithError:;
- (id)initWithScheduler:;
- (id)results;
- (void).cxx_destruct;
- (void)observerDidComplete;
- (id)resultValues;
+ (id)observerWithScheduler:;
@end
