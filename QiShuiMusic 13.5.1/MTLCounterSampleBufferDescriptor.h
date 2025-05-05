@interface MTLCounterSampleBufferDescriptor : NSObject
@property (nonatomic) <MTLCounterSet> counterSet;
@property (nonatomic) NSString label;
@property (nonatomic) Q storageMode;
@property (nonatomic) Q sampleCount;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
