@interface BUPLMotionModel : NSObject
@property (nonatomic) q code;
@property (nonatomic) NSString codeMsg;
- (id)codeMsg;
- (void)setCodeMsg:;
- (long long)code;
- (void).cxx_destruct;
- (void)setCode:;
+ (id)errorModelWithCode:errorMsg:;
+ (id)successModel;
+ (id)unavailableModel;
@end
