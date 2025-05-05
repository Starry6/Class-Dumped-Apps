@interface ToygerFileService : NSObject
+ (BOOL)checkFile:;
+ (id)loadFile:;
+ (void)makeFolder:;
+ (BOOL)saveFile:atPath:;
+ (void)deleteFolder:;
@end
