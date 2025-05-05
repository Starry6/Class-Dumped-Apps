@interface VIStreamingSession : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithCompatService:;
- (id)parseWithRequest:error:;
- (id)extractSignalsWithRequest:error:;
@end
