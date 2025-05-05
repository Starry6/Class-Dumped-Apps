@interface PKVersionedDocument : NSObject
@property (nonatomic) ^v documentArchive;
@property (nonatomic) Q futureVersionCount;
- (id)init;
- (void)dealloc;
- (id)initWithArchive:;
- (id)initWithData:;
- (id)serialize;
- (void)loadArchive:;
- (unsigned int)maxDocumentVersion;
- (void)saveToArchive:;
- (BOOL)loadData:;
- (BOOL)loadDocumentArchive:;
- (unsigned long long)futureVersionCount;
- (void)mergeVersion:fromData:;
- (id)serializeCurrentVersion:;
- (void)saveCurrentVersion:;
- (unsigned long long)mergeWithVersionedDocument:;
- (id)documentArchive;
- (void)setDocumentArchive:;
- (BOOL)loadUnzippedData:;
- (id)initWithUnzippedData:;
+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
+ (unsigned int)versionedDocumentSerializationVersion;
@end
