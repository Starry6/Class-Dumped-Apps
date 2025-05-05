@interface BPSPartialCompletion : NSObject
@property (nonatomic) q state;
@property (nonatomic) @ value;
@property (nonatomic) NSError error;
- (id)init;
- (id)error;
- (id)initWithState:value:error:;
- (long long)state;
- (void).cxx_destruct;
- (id)value;
+ (id)new;
+ (id)withState:value:;
+ (id)withState:error:;
+ (id)withState:;
@end
