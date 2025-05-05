@interface NSInputStream : NSStream
@property (nonatomic) BOOL hasBytesAvailable;
- (void)dealloc;
- (id)initWithURL:;
- (BOOL)hasBytesAvailable;
- (unsigned long long)_cfTypeID;
- (id)initWithData:;
- (BOOL)getBuffer:length:;
- (long long)read:maxLength:;
- (id)_cfStreamError;
- (BOOL)safari_readNetworkOrderUInt16:;
- (BOOL)safari_readNetworkOrderUInt32:;
- (id)safari_readAllData;
+ (id)allocWithZone:;
+ (id)inputStreamWithData:;
+ (id)inputStreamWithFileAtPath:;
+ (id)inputStreamWithURL:;
@end
