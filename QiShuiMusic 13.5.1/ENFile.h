@interface ENFile : NSObject
@property (nonatomic) NSDictionary metadata;
@property (nonatomic) NSData sha256Data;
- (void)dealloc;
- (id)metadata;
- (void)setMetadata:;
- (BOOL)closeAndReturnError:;
- (void).cxx_destruct;
- (BOOL)openWithArchive:error:;
- (BOOL)openWithFD:reading:error:;
- (id)readTEKAndReturnError:;
- (id)sha256Data;
- (BOOL)openWithFileSystemRepresentation:reading:error:;
- (BOOL)openForWritingToData:error:;
- (BOOL)_readPrepareAndReturnError:;
- (BOOL)_resetAndReadHeaderFromArchive:error:;
- (BOOL)_readHeaderFromFile:error:;
- (BOOL)_readHashFromArchive:error:;
- (BOOL)_readHashFromFile:error:;
- (BOOL)_readMetadataFromArchive:error:;
- (BOOL)_readMetadataFromFileHandle:error:;
- (BOOL)_readMetadataFromCoder:error:;
- (BOOL)_writePrepareAndReturnError:;
- (BOOL)_writeMetadataAndReturnError:;
- (id)readTEKWithFlags:error:;
- (id)_readKeyWithPtr:length:error:;
- (BOOL)writeTEK:error:;
- (BOOL)writeTEK:flags:error:;
@end
