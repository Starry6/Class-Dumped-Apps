@interface TLAlertPlaybackCompletionContext : NSObject
@property (nonatomic) @? completionHandler;
@property (nonatomic) q playbackCompletionType;
@property (nonatomic) NSError error;
- (void)setError:;
- (void)setCompletionHandler:;
- (id)error;
- (void).cxx_destruct;
- (id)description;
- (id)completionHandler;
- (long long)playbackCompletionType;
- (void)setPlaybackCompletionType:;
@end
