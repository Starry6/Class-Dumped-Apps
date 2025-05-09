@interface BWDeferredBufferIntermediate : BWDeferredIntermediate
@property (nonatomic) ^{__CVBuffer=} buffer;
@property (nonatomic) Q bufferType;
@property (nonatomic) Q captureFrameFlags;
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) NSString metadataTag;
@property (nonatomic) NSString rawThumbnailsBufferTag;
@property (nonatomic) NSString rawThumbnailsMetadataTag;
@property (nonatomic) NSString portType;
@property (nonatomic) NSInteger compressionProfile;
- (int)setBuffer:;
- (id)portType;
- (void)dealloc;
- (id)buffer;
- (id)initWithCoder:;
- (int)flush;
- (id)attributes;
- (void)encodeWithCoder:;
- (unsigned int)pixelFormat;
- (id)description;
- (id)archive:;
- (int)setURL:prefetchQueue:;
- (id)fetchAndRetain:;
- (id)_shortString;
- (id)initWithBuffer:tag:bufferType:captureFrameFlags:metadataTag:rawThumbnailsBufferTag:rawThumbnailsMetadataTag:portType:compressionProfile:URL:;
- (void)releaseBuffer;
- (unsigned long long)bufferType;
- (unsigned long long)captureFrameFlags;
- (id)metadataTag;
- (id)rawThumbnailsBufferTag;
- (id)rawThumbnailsMetadataTag;
- (int)compressionProfile;
+ (BOOL)supportsSecureCoding;
@end
