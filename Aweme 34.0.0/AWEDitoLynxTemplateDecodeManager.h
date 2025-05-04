@interface AWEDitoLynxTemplateDecodeManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> executeQueue;
- (id)executeQueue;
- (void)setExecuteQueue:;
- (void)preDecodeTemplateForURL:pageScene:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
