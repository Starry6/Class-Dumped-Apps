@interface AWEFeedRequestConfigModel : NSObject
@property (nonatomic) BOOL forceRequest;
@property (nonatomic) NSDictionary requestExtParams;
@property (nonatomic) NSDictionary requestArgs;
- (id)requestExtParams;
- (void)setForceRequest:;
- (BOOL)forceRequest;
- (void)setRequestExtParams:;
- (id)requestArgs;
- (void)setRequestArgs:;
- (void).cxx_destruct;
+ (id)configWithParams:;
+ (id)configWithForceRequest:;
@end
