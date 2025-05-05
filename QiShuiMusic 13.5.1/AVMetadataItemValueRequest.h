@interface AVMetadataItemValueRequest : NSObject
@property (nonatomic) AVMetadataItem metadataItem;
- (void)dealloc;
- (id)error;
- (id)dataType;
- (id)value;
- (id)metadataItem;
- (id)initWithMetadataItem:;
- (void)respondWithValue:dataType:;
- (void)respondWithValue:;
- (void)respondWithError:;
+ (id)metadataItemValueRequestWithMetadataItem:;
@end
