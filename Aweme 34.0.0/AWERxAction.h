@interface AWERxAction : NSObject
@property (nonatomic) q actionType;
@property (nonatomic) AWERxContext context;
- (long long)actionType;
- (void).cxx_destruct;
- (id)context;
- (id)initWithType:context:;
+ (id)actionWithType:context:;
@end
