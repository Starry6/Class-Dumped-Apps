@interface CNVirtualFileManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)removeItemAtURL:;
- (id)init;
- (id)observableWithContentsOfURL:;
- (id)contentsOfDirectoryAtURL:includingPropertiesForKeys:options:;
- (BOOL)fileExistsAtURL:isDirectory:;
- (id)asyncWriteData:toURL:options:;
- (BOOL)fileExistsAtURL:;
- (id)valueForExtendedAttribute:atURL:;
- (BOOL)getValue:forExtendendAttribute:url:error:;
- (void).cxx_destruct;
- (id)createDirectoryAtURL:withIntermediateDirectories:attributes:;
- (id)removeExtendedAttribute:atURL:;
- (id)writeData:toURL:options:;
- (id)setValue:forExtendedAttribute:atURL:;
- (id)dataWithContentsOfURL:;
- (id)asyncDataWithContentsOfURL:;
+ (BOOL)isHiddenURL:;
+ (id)URLByNormalizingDirectoryURL:;
+ (id)allParentFoldersOfURL:;
@end
