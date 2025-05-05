@interface AVCaptureSynchronizedMetadataObjectData : AVCaptureSynchronizedData
@property (nonatomic) NSArray metadataObjects;
- (void)dealloc;
- (id)handledMetadataObjectTypes;
- (id)metadataObjects;
- (id)_initWithMetadataObjectCollection:;
- (void)addSynchronizedData:;
@end
