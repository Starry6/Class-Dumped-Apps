@interface ML3ServiceDatabaseImport : ML3DatabaseImport
@property (nonatomic) ML3MusicLibrary library;
@property (nonatomic) ML3MediaLibraryWriter writer;
@property (nonatomic) ML3Client client;
- (id)library;
- (id)client;
- (void).cxx_destruct;
- (id)writer;
- (id)initWithDatabaseImport:library:writer:client:;
@end
