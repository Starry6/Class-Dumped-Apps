@interface MFData : NSData
- (id)initWithBytesNoCopy:length:;
- (id)initWithBytes:length:;
- (id)init;
- (void)dealloc;
- (BOOL)writeToFile:atomically:;
- (id)data;
- (id)initWithContentsOfURL:;
- (id)initWithContentsOfURL:options:error:;
- (id)subdataWithRange:;
- (id)bytes;
- (id)initWithImmutableData:;
- (BOOL)writeToURL:atomically:;
- (BOOL)writeToFile:options:error:;
- (BOOL)mf_immutable;
- (id)initWithBytesNoCopy:length:freeWhenDone:;
- (id)initWithContentsOfFile:options:error:;
- (BOOL)writeToURL:options:error:;
- (id)initWithContentsOfFile:;
- (id)initWithData:;
- (unsigned long long)length;
- (id)_initWithRange:from:retainingParent:;
- (id)mutableCopyWithZone:;
- (id)_initWithData:maybeMutable:;
- (id)_initWithFile:;
- (id)copyWithZone:;
+ (void)setDefaultMappingThresholdInBytes:;
@end
