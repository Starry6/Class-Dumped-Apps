@interface WBSSiteMetadataFetchOperation : NSOperation
@property (nonatomic) q status;
@property (nonatomic) WBSSiteMetadataRequest request;
- (id)initWithRequest:;
- (id)init;
- (void)start;
- (BOOL)isExecuting;
- (id)request;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (long long)_status;
- (void)_setStatus:;
+ (id)keyPathsForValuesAffectingValueForKey:;
@end
