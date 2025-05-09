@interface PUEditingInitialPayload : NSObject
@property (nonatomic) q mediaType;
@property (nonatomic) Q mediaSubtypes;
@property (nonatomic) q playbackStyle;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) CLLocation location;
@property (nonatomic) PHAdjustmentData adjustmentData;
@property (nonatomic) q adjustmentBaseVersion;
@property (nonatomic) NSData placeholderImageData;
@property (nonatomic) NSData displaySizeImageData;
@property (nonatomic) NSURL videoURL;
@property (nonatomic) NSString videoPathSandboxExtensionToken;
@property (nonatomic) {?=qiIq} livePhotoStillDisplayTime;
@property (nonatomic) NSURL fullSizeImageURL;
@property (nonatomic) NSString fullSizeImageURLSandboxExtensionToken;
@property (nonatomic) NSInteger fullSizeImageExifOrientation;
@property (nonatomic) NSString accessibilityDescription;
@property (nonatomic) NSString uniformTypeIdentifier;
- (long long)mediaType;
- (void)setMediaType:;
- (id)videoURL;
- (void)setUniformTypeIdentifier:;
- (void)setCreationDate:;
- (id)uniformTypeIdentifier;
- (id)accessibilityDescription;
- (id)initWithCoder:;
- (id)location;
- (void)encodeWithCoder:;
- (void)setVideoURL:;
- (void)setLocation:;
- (void).cxx_destruct;
- (unsigned long long)mediaSubtypes;
- (id)creationDate;
- (long long)playbackStyle;
- (id)adjustmentData;
- (void)setAccessibilityDescription:;
- (void)setAdjustmentData:;
- (void)setPlaybackStyle:;
- (void)setMediaSubtypes:;
- (id)fullSizeImageURL;
- (void)setFullSizeImageURL:;
- (long long)adjustmentBaseVersion;
- (void)setDisplaySizeImageData:;
- (void)setLivePhotoStillDisplayTime:;
- (void)setFullSizeImageExifOrientation:;
- (void)setFullSizeImageURLSandboxExtensionToken:;
- (void)setVideoPathSandboxExtensionToken:;
- (void)setPlaceholderImageData:;
- (void)setAdjustmentBaseVersion:;
- (id)placeholderImageData;
- (id)displaySizeImageData;
- (id)videoPathSandboxExtensionToken;
- (id)livePhotoStillDisplayTime;
- (id)fullSizeImageURLSandboxExtensionToken;
- (int)fullSizeImageExifOrientation;
+ (BOOL)supportsSecureCoding;
@end
