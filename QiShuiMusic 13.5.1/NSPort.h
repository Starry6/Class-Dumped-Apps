@interface NSPort : NSObject
@property (nonatomic) BOOL valid;
@property (nonatomic) Q reservedSpaceLength;
- (unsigned int)machPort;
- (void)removeFromRunLoop:forMode:;
- (void)setDelegate:;
- (void)scheduleInRunLoop:forMode:;
- (id)initWithCoder:;
- (id)replacementObjectForCoder:;
- (void)encodeWithCoder:;
- (id)delegate;
- (BOOL)isValid;
- (Class)classForCoder;
- (void)invalidate;
- (id)copyWithZone:;
- (id)initWithMachPort:;
- (unsigned long long)reservedSpaceLength;
- (Class)classForPortCoder;
- (BOOL)sendBeforeDate:components:from:reserved:;
- (BOOL)sendBeforeDate:msgid:components:from:reserved:;
- (BOOL)isValid;
- (unsigned long long)reservedSpaceLength;
+ (id)allocWithZone:;
+ (id)port;
+ (id)portWithMachPort:;
@end
