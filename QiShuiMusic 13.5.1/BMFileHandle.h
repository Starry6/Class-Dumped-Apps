@interface BMFileHandle : NSObject
@property (nonatomic) NSInteger fd;
@property (nonatomic) BMFileAttributes attributes;
@property (nonatomic) NSFileHandle nsFileHandle;
- (int)fd;
- (id)initWithFileDescriptor:attributes:;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (id)attributes;
- (id)_initWithFileDescriptor:attributes:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)nsFileHandle;
- (id)readDataWithError:;
- (BOOL)overwriteWithData:error:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
