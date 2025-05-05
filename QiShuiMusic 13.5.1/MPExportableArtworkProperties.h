@interface MPExportableArtworkProperties : NSObject
@property (nonatomic) ICStoreArtworkInfo artworkInfo;
@property (nonatomic) NSString resolvedURLString;
@property (nonatomic) NSArray artworkTemplateItems;
@property (nonatomic) Q mediaType;
@property (nonatomic) q mediaLibraryArtworkType;
@property (nonatomic) BOOL valid;
- (unsigned long long)mediaType;
- (void)setMediaType:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)artworkInfo;
- (id)resolvedURLString;
- (void)setResolvedURLString:;
- (id)artworkTemplateItems;
- (void)setArtworkTemplateItems:;
- (long long)mediaLibraryArtworkType;
- (void)setMediaLibraryArtworkType:;
@end
