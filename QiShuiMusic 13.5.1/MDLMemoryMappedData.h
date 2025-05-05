@interface MDLMemoryMappedData : NSObject
- (void)dealloc;
- (id)dataNoCopy;
- (id)initWithURL:offset:length:;
@end
