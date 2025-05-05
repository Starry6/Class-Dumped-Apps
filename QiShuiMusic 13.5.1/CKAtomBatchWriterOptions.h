@interface CKAtomBatchWriterOptions : NSObject
@property (nonatomic) C formatVersion;
@property (nonatomic) BOOL fileBacked;
@property (nonatomic) NSDictionary underlyingWriterOptionsByClass;
- (id)init;
- (unsigned char)formatVersion;
- (void).cxx_destruct;
- (void)setFormatVersion:;
- (BOOL)fileBacked;
- (void)setFileBacked:;
- (id)underlyingWriterOptionsByClass;
- (void)setUnderlyingWriterOptionsByClass:;
@end
