@interface NSFileProviderKernelMaterializationInfo : NSObject
@property (nonatomic) I operation;
@property (nonatomic) NSFileProviderKernelFileMaterializationInfo fileMaterializationInfo;
@property (nonatomic) NSFileProviderKernelPartialFolderMaterializationInfo partialFolderMaterializationInfo;
- (unsigned int)operation;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)fileMaterializationInfo;
- (id)partialFolderMaterializationInfo;
+ (BOOL)supportsSecureCoding;
+ (id)kernelMaterializationInfoWithOperation:;
+ (id)fileMaterializationInfoWithOperation:size:offset:;
+ (id)partialFolderMaterializationInfoWithOperation:fileName:;
@end
