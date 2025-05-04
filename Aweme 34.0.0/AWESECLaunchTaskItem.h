@interface AWESECLaunchTaskItem : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? handler;
- (id)initWithName:withHandler:;
- (void)setHandler:;
- (void)execute;
- (id)handler;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
@end
