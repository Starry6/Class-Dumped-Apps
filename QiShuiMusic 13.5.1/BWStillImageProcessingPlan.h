@interface BWStillImageProcessingPlan : NSObject
- (void)dealloc;
- (id)initWithSettings:;
- (id)description;
- (void)addInput:sequenceNumber:portType:bufferType:;
- (void)addInput:sequenceNumber:portType:bufferTypes:;
- (id)lastAddedInputForSequenceNumber:portType:bufferType:;
@end
