@interface SPIPowerLoggerSnapshot : NSObject
@property (nonatomic) SPIPowerLogger powerLogger;
@property (nonatomic) {SPIResourceUsage=QQQ} usage;
@property (nonatomic) Q captureTimestamp;
- (id)usage;
- (id)init;
- (unsigned long long)captureTimestamp;
- (id)powerLogger;
- (id)initWithPowerLogger:usage:captureTimestamp:;
- (void)logWithEventContext:ttsIdentifier:;
- (void)logWithEventContext:componentName:identifier:;
- (void).cxx_destruct;
- (void)logWithEventContext:turnIdentifier:;
- (void)buildAndEmitWithMessageBuilder:eventContext:;
- (void)logWithEventContext:asrIdentifier:;
- (void)logWithEventContext:requestIdentifier:;
- (void)logWithEventContext:;
@end
