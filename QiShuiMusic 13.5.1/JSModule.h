@interface JSModule : NSObject
@property (nonatomic) NSString moduleName;
- (void)fire:withParams:;
- (id)initWithModuleName:;
- (void)setJSProxy:;
- (void)setModuleName:;
- (id)init;
- (id)moduleName;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
