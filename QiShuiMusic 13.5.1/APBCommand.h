@interface APBCommand : NSObject
@property (nonatomic) q commandType;
@property (nonatomic) NSDictionary params;
- (id)initWithCommandType:withParams:;
- (long long)commandType;
- (void).cxx_destruct;
- (void)setCommandType:;
- (id)params;
- (void)setParams:;
@end
