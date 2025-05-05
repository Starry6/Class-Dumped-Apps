@interface BWMetadataFormat : BWFormat
- (unsigned int)mediaType;
- (id)formatDescription;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
+ (id)formatWithMetadataFormatDescription:;
@end
