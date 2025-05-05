@interface BWDataBufferPool : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q capacity;
@property (nonatomic) I dataFormat;
@property (nonatomic) ^{__CVDataBufferPool=} cvDataBufferPool;
@property (nonatomic) ^{__CFDictionary=} cvDataBufferPoolAuxAttributes;
- (unsigned long long)capacity;
- (void)setCapacity:;
- (void)dealloc;
- (void)enumerateSurfacesUsingBlock:;
- (id)name;
- (void)flushToMinimumCapacity:;
- (void)prefetchWithCompletionHandler:;
- (id)initWithFormat:capacity:name:clientProvidesPool:;
- (void)setCVDataBufferPool:attributes:;
- (id)newDataBuffer;
- (unsigned int)dataFormat;
- (id)cvDataBufferPool;
- (id)cvDataBufferPoolAuxAttributes;
@end
