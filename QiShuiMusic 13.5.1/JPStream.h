@interface JPStream : NSObject
@property (nonatomic) ^{JetPackStream=} backing;
@property (nonatomic) BOOL releaseBackingOnDealloc;
- (id)readData;
- (unsigned long long)readBytes:length:;
- (void)dealloc;
- (id)backing;
- (id)readDataWithLength:;
- (BOOL)releaseBackingOnDealloc;
- (id)initWithBacking:releaseOnDealloc:;
- (BOOL)writeToFile:blockSize:error:;
@end
