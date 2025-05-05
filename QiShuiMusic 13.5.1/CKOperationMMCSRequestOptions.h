@interface CKOperationMMCSRequestOptions : NSObject
@property (nonatomic) BOOL resumableContainerLimpMode;
@property (nonatomic) BOOL chunkingLibraryCorruptionMode;
@property (nonatomic) BOOL insufficientDiskSpaceMode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)resumableContainerLimpMode;
- (void)setResumableContainerLimpMode:;
- (BOOL)chunkingLibraryCorruptionMode;
- (void)setChunkingLibraryCorruptionMode:;
- (BOOL)insufficientDiskSpaceMode;
- (void)setInsufficientDiskSpaceMode:;
+ (BOOL)supportsSecureCoding;
@end
