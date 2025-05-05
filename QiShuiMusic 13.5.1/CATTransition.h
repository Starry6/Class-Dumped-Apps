@interface CATTransition : NSObject
@property (nonatomic) CATState state;
@property (nonatomic) : action;
- (id)init;
- (SEL)action;
- (id)state;
- (void).cxx_destruct;
- (id)initWithState:action:;
- (id)description;
+ (id)new;
@end
