@interface NSFileProviderKernelFileMaterializationInfo : NSObject
@property (nonatomic) q size;
@property (nonatomic) q offset;
- (id)initWithCoder:;
- (long long)offset;
- (void)encodeWithCoder:;
- (long long)size;
- (id)initWithSize:offset:;
+ (BOOL)supportsSecureCoding;
@end
