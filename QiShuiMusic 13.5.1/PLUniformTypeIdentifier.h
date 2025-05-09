@interface PLUniformTypeIdentifier : NSObject
@property (nonatomic) I wellKnownFileType;
@property (nonatomic) s conformanceHint;
@property (nonatomic) NSString compactRepresentation;
@property (nonatomic) NSString identifier;
- (BOOL)isDynamic;
- (id)compactRepresentation;
- (BOOL)conformsToJPEG;
- (BOOL)isPlayableVideo;
- (id)identifier;
- (BOOL)isPrimaryImageFormat;
- (short)conformanceHint;
- (unsigned long long)hash;
- (BOOL)isLosslessEncoding;
- (BOOL)isEqualToUniformTypeIdentifier:;
- (id)preferredExtension;
- (BOOL)conformsToMovie;
- (void).cxx_destruct;
- (id)initWithIdentifier:compactRepresentation:conformanceHint:;
- (BOOL)conformsToAudio;
- (id)description;
- (unsigned int)wellKnownFileType;
- (BOOL)conformsToImage;
- (BOOL)conformsToData;
- (BOOL)conformsToRawImage;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)isPlayableVideoTypeIdentifierString:;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)jpegUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;
+ (id)utiWithIdentifier:;
+ (id)plistUniformTypeIdentifier;
+ (id)utiWithCompactRepresentation:conformanceHint:;
@end
