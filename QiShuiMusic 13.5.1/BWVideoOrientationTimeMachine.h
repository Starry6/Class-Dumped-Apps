@interface BWVideoOrientationTimeMachine : NSObject
- (void)dealloc;
- (void)addItemToCacheWithPTS:exifOrientation:;
- (id)initWithCapacity:formatDescription:metadataLocalID:;
- (id)debugDescription;
- (id)copyVideoOrientationSbufFromPTS:toPTS:referencePTS:;
- (id)_cachedItemsFromPTSSeconds:toPTSSeconds:;
@end
