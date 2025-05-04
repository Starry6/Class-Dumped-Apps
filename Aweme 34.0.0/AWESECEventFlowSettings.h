@interface AWESECEventFlowSettings : NSObject
+ (BOOL)eventFlowEnabledByModule:;
+ (id)eventFlowDetectAllStrategyByModule:;
+ (BOOL)SECFlowEnable;
+ (id)SECFlowUploadConfig;
+ (BOOL)SECFlowExternalEventEnable;
+ (BOOL)SECFlowThreadOpt;
+ (id)eventFlowDetectAllStrategy;
@end
