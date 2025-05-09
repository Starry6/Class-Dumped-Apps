@interface LPAudio : NSObject
@property (nonatomic) Q _encodedSize;
@property (nonatomic) NSData data;
@property (nonatomic) NSString MIMEType;
@property (nonatomic) AVAsset _asset;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) NSURL streamingURL;
@property (nonatomic) LPAudioProperties properties;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFileURL:;
- (id)init;
- (BOOL)resourceLoader:shouldWaitForLoadingOfRequestedResource:;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)properties;
- (void).cxx_destruct;
- (id)fileURL;
- (id)_asset;
- (BOOL)isEqual:;
- (id)MIMEType;
- (id)initByReferencingFileURL:MIMEType:properties:;
- (void)_mapDataFromFileURL;
- (unsigned long long)_encodedSize;
- (BOOL)_isSubstitute;
- (id)initWithStreamingURL:properties:;
- (id)streamingURL;
- (id)_initWithAudio:;
+ (BOOL)supportsSecureCoding;
@end
