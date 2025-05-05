@interface AAFPromise : NSObject
@property (nonatomic) @? then;
@property (nonatomic) @? catch;
- (id)catchOnQueue;
- (id)_placeBlock:onQueue:;
- (id)initWithError:;
- (void)_completeWithValue:error:;
- (void)abortWithError:;
- (id)then:;
- (id)then;
- (id)initWithBlock:;
- (id)then:onQueue:;
- (void)onComplete:onQueue:;
- (void)_startWithBlock:;
- (void).cxx_destruct;
- (id)catch:onQueue:;
- (id)catch;
- (id)_chain:;
- (void)_handleChainingResult:withCompletion:;
- (id)catch:;
- (id)thenOnQueue;
- (void)onComplete:;
- (id)initWithValue:;
+ (id)all:;
@end
