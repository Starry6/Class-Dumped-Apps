@interface NSOutputStream : NSStream
@property (nonatomic) BOOL hasSpaceAvailable;
- (long long)write:maxLength:;
- (id)initToMemory;
- (void)dealloc;
- (id)initToBuffer:capacity:;
- (id)initWithURL:append:;
- (BOOL)hasSpaceAvailable;
- (unsigned long long)_cfTypeID;
- (id)_cfStreamError;
- (BOOL)safari_writeNetworkOrderUInt16:;
- (BOOL)safari_writeNetworkOrderUInt32:;
+ (id)allocWithZone:;
+ (id)outputStreamToMemory;
+ (id)outputStreamToBuffer:capacity:;
+ (id)outputStreamToFileAtPath:append:;
+ (id)outputStreamWithURL:append:;
@end
