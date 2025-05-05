@interface PLFileSystemBookmark : PLManagedObject
@property (nonatomic) NSData bookmarkData;
@property (nonatomic) NSString pathRelativeToVolume;
@property (nonatomic) PLInternalResource resource;
- (id)payloadID;
- (id)payloadForChangedKeys:;
- (BOOL)supportsCloudUpload;
- (id)fileSystemURL;
+ (id)entityName;
+ (id)fileSystemBookmarkFromURL:context:;
@end
