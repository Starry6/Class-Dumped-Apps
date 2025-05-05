@interface TTObservationBuffer : NSObject
@property (nonatomic) Q bufferSizeMax;
@property (nonatomic) NSMutableArray list;
- (void)addObservation:;
- (void)addObservationWithBuffer:;
- (unsigned long long)bufferSizeMax;
- (void)clearBuff;
- (id)getAverageObservation:;
- (unsigned long long)getBufferRealSize;
- (id)getFirstObservation;
- (BOOL)isExistSameCheckResultType:;
- (unsigned long long)observationCheckByPercent:percent:rttGap:speedGap:;
- (void)setBufferSizeMax:;
- (void)setCapacity:;
- (BOOL)isFull;
- (BOOL)isEmpty;
- (void)setList:;
- (id)list;
- (void).cxx_destruct;
- (id)initWithCapacity:;
@end
