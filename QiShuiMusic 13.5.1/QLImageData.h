@interface QLImageData : NSObject
- (void)dealloc;
- (long long)orientation;
- (id)type;
- (id)durations;
- (unsigned long long)count;
- (id)size;
- (id)imageAtIndex:;
- (id)initWithImageSource:;
@end
