@interface JSONAPI : NSObject
@property (nonatomic) NSString baseURLString;
- (void).cxx_destruct;
- (id)baseURLString;
- (void)setBaseURLString:;
+ (void)__rpcRequestWithObject:completion:;
+ (void)getWithPath:andParams:completion:;
+ (void)postWithPath:andParams:completion:;
+ (void)rpc2WithMethodName:andParams:completion:;
+ (void)rpcWithMethodName:andArguments:completion:;
+ (void)setAPIBaseURLWithString:;
+ (void)setContentType:;
@end
