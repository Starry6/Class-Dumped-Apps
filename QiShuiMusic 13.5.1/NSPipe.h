@interface NSPipe : NSObject
@property (nonatomic) NSFileHandle fileHandleForReading;
@property (nonatomic) NSFileHandle fileHandleForWriting;
- (void)_closeOnDealloc;
- (id)init;
- (id)fileHandleForWriting;
- (id)fileHandleForReading;
+ (id)allocWithZone:;
+ (id)pipe;
@end
