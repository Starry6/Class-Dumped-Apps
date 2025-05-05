@interface FLEXInternalRequestState : NSObject
@property (nonatomic) NSURLRequest request;
@property (nonatomic) NSMutableData dataAccumulator;
- (id)request;
- (void)setRequest:;
- (id)dataAccumulator;
- (void)setDataAccumulator:;
- (void).cxx_destruct;
@end
