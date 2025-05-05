@interface PFTimeZoneLookup : PFCachingArchiveIndex
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)indexFileVersion;
- (BOOL)loadIndexFile:fileSize:;
- (id)timeZoneNameForCoordinate:;
- (id)indexLabel;
- (void).cxx_destruct;
- (BOOL)indexSupported;
- (id)archiveLineParserForIndexPath:;
- (id)anyCoordinateForTimeZoneName:;
- (BOOL)loadOrCreateIndex;
- (id).cxx_construct;
- (id)indexName;
@end
