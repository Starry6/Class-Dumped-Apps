@interface CKDSWritableStorage : CKDSStorage
@property (nonatomic) NSMutableData data;
- (id)initWithFileURL:;
- (id)initInMemory;
- (id)initWithTemporaryFile:;
- (id)readableStorage;
@end
