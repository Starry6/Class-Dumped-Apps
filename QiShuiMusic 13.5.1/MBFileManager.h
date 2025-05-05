@interface MBFileManager : NSObject
- (BOOL)removeFileAtPath:;
- (BOOL)fileExistsAtPath:;
- (id)fileAttributesAtPath:traverseLink:;
- (id)directoryContentsAtPath:;
- (BOOL)createDirectoryAtPath:attributes:;
- (BOOL)copyPath:toPath:;
- (BOOL)movePath:toPath:;
+ (id)defaultManager;
@end
