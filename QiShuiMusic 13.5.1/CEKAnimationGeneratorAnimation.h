@interface CEKAnimationGeneratorAnimation : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) @? updateHandler;
@property (nonatomic) @? completionHandler;
- (double)startTime;
- (id)updateHandler;
- (void).cxx_destruct;
- (double)duration;
- (id)completionHandler;
- (id)initWithStartTime:duration:updateHandler:completionHandler:;
@end
