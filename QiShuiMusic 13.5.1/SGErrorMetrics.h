@interface SGErrorMetrics : NSObject
@property (nonatomic) SGMBadInteractionIgnored badInteractionIgnored;
- (id)init;
- (void).cxx_destruct;
- (id)badInteractionIgnored;
- (void)setBadInteractionIgnored:;
+ (id)instance;
+ (void)recordInteractionIgnoredWithReason:;
@end
