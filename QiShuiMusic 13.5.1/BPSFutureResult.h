@interface BPSFutureResult : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSError error;
@property (nonatomic) @ value;
- (id)error;
- (id)initWithState:value:error:;
- (long long)state;
- (void).cxx_destruct;
- (id)value;
+ (id)failureWithError:;
+ (id)successWithValue:;
@end
