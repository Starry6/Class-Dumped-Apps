@interface AWEACCMonitorToolImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)showWithTitle:error:extra:owner:options:;
+ (void)reportOnlineWithTitle:error:extra:;
+ (void)appendMsgWithTitle:error:extra:owner:options:;
+ (void)reportToFeishu:;
@end
