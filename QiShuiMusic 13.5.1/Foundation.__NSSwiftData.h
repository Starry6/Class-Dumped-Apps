@interface Foundation.__NSSwiftData : NSData
@property (nonatomic) q length;
@property (nonatomic) ^v bytes;
- (id)initWithBytesNoCopy:length:;
- (BOOL)_isCompact;
- (id)initWithBytes:length:;
- (id)init;
- (id)initWithContentsOfFile:error:;
- (id)initWithBase64EncodedData:options:;
- (id)initWithContentsOfURL:;
- (id)initWithContentsOfURL:options:error:;
- (BOOL)_providesConcreteBacking;
- (id)initWithBase64EncodedString:options:;
- (id)bytes;
- (id)initWithContentsOfMappedFile:;
- (id)initWithCoder:;
- (id)initWithBytesNoCopy:length:freeWhenDone:;
- (id)initWithContentsOfFile:options:error:;
- (id)initWithContentsOfFile:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)initWithContentsOfMappedFile:error:;
- (long long)length;
- (id)initWithContentsOfURL:options:maxLength:error:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)initWithBytesNoCopy:length:deallocator:;
@end
