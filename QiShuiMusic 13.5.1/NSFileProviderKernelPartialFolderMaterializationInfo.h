@interface NSFileProviderKernelPartialFolderMaterializationInfo : NSObject
@property (nonatomic) NSString fileName;
- (id)fileName;
- (void)dealloc;
- (id)initWithCoder:;
- (id)initWithFileName:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
