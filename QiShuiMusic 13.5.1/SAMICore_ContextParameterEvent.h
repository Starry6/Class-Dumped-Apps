@interface SAMICore_ContextParameterEvent : NSObject
@property (nonatomic) NSInteger portIndex;
@property (nonatomic) NSInteger parameterIndex;
@property (nonatomic) float normalizedValue;
@property (nonatomic) float plainValue;
@property (nonatomic) NSString processorName;
- (int)parameterIndex;
- (float)plainValue;
- (int)portIndex;
- (void)setParameterIndex:;
- (void)setPlainValue:;
- (void)setPortIndex:;
- (void)setProcessorName:;
- (float)normalizedValue;
- (void)setNormalizedValue:;
- (id)processorName;
@end
