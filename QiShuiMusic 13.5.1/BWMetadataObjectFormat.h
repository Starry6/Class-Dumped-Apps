@interface BWMetadataObjectFormat : BWFormat
- (unsigned int)mediaType;
- (void)dealloc;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:;
+ (id)formatWithMetadataIdentifiers:;
@end
