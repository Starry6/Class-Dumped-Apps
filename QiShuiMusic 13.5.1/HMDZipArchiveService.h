@interface HMDZipArchiveService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (Class)zipArchive;
+ (BOOL)createZipFileAtPath:withFilesAtPaths:;
+ (BOOL)createZipFileAtPath:withContentsOfDirectory:;
@end
