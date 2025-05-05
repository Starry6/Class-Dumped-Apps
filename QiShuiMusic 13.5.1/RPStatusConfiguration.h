@interface RPStatusConfiguration : NSObject
@property (nonatomic) NSString statusID;
@property (nonatomic) double leeway;
@property (nonatomic) Q flags;
@property (nonatomic) @? handler;
- (id)handler;
- (void).cxx_destruct;
- (double)leeway;
- (unsigned long long)flags;
- (id)initWithStatusID:leeway:configurationFlags:statusUpdateHandler:;
- (id)statusID;
@end
