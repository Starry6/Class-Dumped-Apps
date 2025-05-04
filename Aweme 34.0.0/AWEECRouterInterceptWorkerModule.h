@interface AWEECRouterInterceptWorkerModule : NSObject
@property (nonatomic) <AWEECRouterInterceptDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithParam:;
- (void)openSchema:;
- (void)fetch:params:method:callback:data:headers:;
- (void)sendLogV3:params:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)methodLookup;
+ (id)name;
@end
