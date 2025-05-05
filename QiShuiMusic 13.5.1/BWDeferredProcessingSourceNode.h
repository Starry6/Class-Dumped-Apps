@interface BWDeferredProcessingSourceNode : BWSourceNode
@property (nonatomic) NSDictionary outputsByPortType;
- (BOOL)stop:;
- (BOOL)start:;
- (void)dealloc;
- (id)outputForPortType:;
- (id)initWithPortTypes:attributes:colorSpaceProperties:;
- (id)portTypeForOutput:;
- (void)processBuffer:;
- (id)outputsByPortType;
@end
