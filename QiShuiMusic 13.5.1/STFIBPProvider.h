@interface STFIBPProvider : NSObject
+ (id)STFStillIBPForVersion:;
+ (id)STFVideoProcessorForVersion:ringBufferSize:historySize:cmdQueue:;
@end
