@interface CFPDCFDataBuffer : CFPDDataBuffer
- (void)dealloc;
- (id)bytes;
- (id)initWithCFData:;
- (id)copyXPCData;
- (id)copyCFData;
- (unsigned long long)length;
@end
