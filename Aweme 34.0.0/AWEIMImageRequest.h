@interface AWEIMImageRequest : NSObject
@property (nonatomic) NSString requestKey;
@property (nonatomic) AWEIMImageTracker tracker;
@property (nonatomic) @? completionBock;
- (id)initWithKey:completion:;
- (id)completionBock;
- (void)setCompletionBock:;
- (id)tracker;
- (id)requestKey;
- (void)setTracker:;
- (void).cxx_destruct;
- (void)setRequestKey:;
@end
