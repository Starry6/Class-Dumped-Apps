@interface NSConcretePipe : NSPipe
- (void)_closeOnDealloc;
- (id)init;
- (void)dealloc;
- (id)fileHandleForWriting;
- (id)fileHandleForReading;
- (id)copyWithZone:;
@end
