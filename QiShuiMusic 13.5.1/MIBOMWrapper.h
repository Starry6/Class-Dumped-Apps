@interface MIBOMWrapper : NSObject
+ (BOOL)extractZipArchiveAtURL:toURL:withError:;
+ (BOOL)_countFilesAndBytesInArchiveAtURL:withBOMCopier:totalFiles:totalUncompressedBytes:error:;
+ (BOOL)extractZipArchiveAtURL:toURL:withError:extractionProgressBlock:;
@end
