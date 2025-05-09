@interface PLImageFormat : NSObject
@property (nonatomic) S formatID;
@property (nonatomic) NSString name;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) BOOL isCropped;
@property (nonatomic) double dimension;
@property (nonatomic) q thumbnailKind;
@property (nonatomic) q formatMode;
@property (nonatomic) BOOL isSquare;
@property (nonatomic) BOOL dimensionsReferToShortSide;
@property (nonatomic) BOOL isTable;
@property (nonatomic) BOOL isThumbnail;
@property (nonatomic) BOOL isAlwaysFullScreen;
@property (nonatomic) q version;
@property (nonatomic) BOOL refersToLatestVersion;
@property (nonatomic) BOOL refersToUnadjustedVersion;
@property (nonatomic) BOOL refersToPenultimateVersion;
@property (nonatomic) BOOL refersToOriginalVersion;
@property (nonatomic) Q metalPixelFormat;
@property (nonatomic) ^{__CFString=} colorSpaceName;
- (long long)contentMode;
- (id)sizeWithFallBackSize:;
- (id)init;
- (id)shortDescription;
- (double)dimension;
- (long long)version;
- (id)colorSpaceName;
- (unsigned long long)hash;
- (long long)thumbnailKind;
- (unsigned long long)metalPixelFormat;
- (long long)compare:;
- (void).cxx_destruct;
- (BOOL)isSquare;
- (id)description;
- (id)name;
- (BOOL)isTable;
- (BOOL)isEqual:;
- (BOOL)isThumbnail;
- (id)size;
- (Class)_tableClass;
- (BOOL)dimensionsReferToShortSide;
- (BOOL)isCropped;
- (unsigned short)formatID;
- (long long)formatMode;
- (id)scaledSizeForSourceSize:;
- (id)scaledSizeForSourceSize:capLength:;
- (BOOL)refersToLatestVersion;
- (BOOL)refersToOriginalVersion;
- (BOOL)refersToPenultimateVersion;
- (BOOL)refersToUnadjustedVersion;
- (BOOL)isAlwaysFullScreen;
- (id)createTableWithPath:readOnly:format:;
- (unsigned long long)tableFormatBytesPerRowForWidth:;
- (id)thumbnailSpecification;
- (BOOL)isEqualToFormat:;
- (unsigned long long)fullSizeDesiredLongSide;
- (unsigned long long)fullSizeMaxLongSide;
- (unsigned long long)fullSizeMinShortSide;
- (BOOL)_isAcceptableForViewSize:contentMode:sourceAspectRatio:desiredImageSize:demoteFactor:;
- (BOOL)_canDegradeToFormat:;
- (id)initWithName:size:isCropped:;
- (id)initWithName:size:isCropped:version:isAlwaysFullScreen:;
- (id)initWithName:size:isCropped:version:isAlwaysFullScreen:formatMode:thumbnailKind:;
- (id)initWithFormatID:;
- (id)_shortSideFormatScaledSizeForSourceSize:capLength:;
- (unsigned long long)tableFormatBytesPerPixel;
- (void)setFormatID:;
+ (id)formatWithID:;
+ (id)_syncFormats;
@end
