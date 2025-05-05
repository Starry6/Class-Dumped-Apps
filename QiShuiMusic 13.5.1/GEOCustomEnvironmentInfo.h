@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo
- (void)delete;
- (void)save;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isActive;
- (id)initWithName:displayName:dictionaryRepresentation:;
- (void)makeActive;
- (void)updateWithURLs:;
- (id)overrideURLs;
@end
