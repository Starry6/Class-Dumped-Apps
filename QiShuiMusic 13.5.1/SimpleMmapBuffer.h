@interface SimpleMmapBuffer : NSObject
@property (nonatomic) Q size;
@property (nonatomic) ^v dataPointer;
- (void)dealloc;
- (id)dataPointer;
- (void)setSize:;
- (unsigned long long)size;
- (void)setDataPointer:;
- (id)initWithData:ofSize:;
@end
