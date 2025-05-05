@interface AVMediaFileType : NSObject
@property (nonatomic) NSString defaultFileExtension;
@property (nonatomic) NSSet supportedMediaTypes;
@property (nonatomic) BOOL supportsSampleReferences;
@property (nonatomic) NSString UTI;
@property (nonatomic) NSString figFormatReaderFileFormat;
@property (nonatomic) I audioFileTypeID;
- (void)dealloc;
- (unsigned int)audioFileTypeID;
- (id)supportedMediaTypes;
- (id)initWithFileTypeIdentifier:exceptionReason:;
- (BOOL)supportsSampleReferences;
- (id)UTI;
- (id)description;
- (id)figFormatReaderFileFormat;
- (BOOL)supportsOutputSettings:reason:;
- (BOOL)supportsFormat:;
- (id)defaultFileExtension;
- (id)copyWithZone:;
+ (id)mediaFileTypeWithFileTypeIdentifier:;
+ (id)allFileTypeIdentifiers;
+ (id)figFileTypeProfileFromAVFileTypeProfile:;
+ (id)_mediaFileTypeWithFileTypeIdentifier:exceptionReason:;
+ (id)isoFileTypes;
@end
