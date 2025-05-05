@interface ETDataPoint : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setImage:forKey:;
- (void)iterateBuffersByKey:;
- (void)setData:size:forKey:freeWhenDone:;
- (id)imageWithKey:;
- (id)bufferWithKey:;
- (id)getSampleData;
@end
