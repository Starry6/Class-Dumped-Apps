@interface FFDefaultFileWriter : NSObject
@property (nonatomic) NSDictionary fileAttributes;
@property (nonatomic) NSDictionary dirAttributes;
- (id)fileAttributes;
- (id)init;
- (BOOL)createDirectoryAtURL:error:;
- (id)dirAttributes;
- (void).cxx_destruct;
- (BOOL)writeData:toFile:error:;
@end
