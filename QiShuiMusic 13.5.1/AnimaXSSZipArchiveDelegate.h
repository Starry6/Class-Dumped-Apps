@interface AnimaXSSZipArchiveDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)zipArchiveShouldUnzipFileAtIndex:totalFiles:archivePath:fileInfo:;
+ (id)sharedInstance;
@end
