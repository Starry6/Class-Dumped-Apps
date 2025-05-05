@interface CKDSStorage : NSObject
@property (nonatomic) CKDSStorageFile file;
@property (nonatomic) BOOL writable;
@property (nonatomic) NSURL fileURL;
@property (nonatomic) NSData data;
- (id)data;
- (BOOL)writable;
- (id)file;
- (void).cxx_destruct;
- (id)fileURL;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)dataWithError:;
- (void)setWritable:;
- (id)initForWriting:withFile:orData:;
- (BOOL)size:error:;
@end
