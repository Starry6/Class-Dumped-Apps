@interface MFCountingDataConsumer : MFNullDataConsumer
@property (nonatomic) Q count;
- (long long)appendData:;
- (unsigned long long)count;
@end
