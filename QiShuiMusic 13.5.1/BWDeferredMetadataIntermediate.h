@interface BWDeferredMetadataIntermediate : BWDeferredDictionaryIntermediate
@property (nonatomic) NSString bufferTag;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithMetadata:tag:bufferTag:URL:;
- (id)bufferTag;
+ (BOOL)supportsSecureCoding;
@end
