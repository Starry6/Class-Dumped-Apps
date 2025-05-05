@interface BPSCompletion : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSError error;
- (id)init;
- (id)initWithState:error:;
- (id)error;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
+ (id)new;
+ (id)success;
+ (id)failureWithError:;
@end
