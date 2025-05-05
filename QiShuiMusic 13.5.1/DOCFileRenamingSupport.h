@interface DOCFileRenamingSupport : NSObject
+ (id)fallbackRename:toProposedName:error:;
+ (BOOL)_validateFileName:error:;
+ (id)_filteredNameForName:error:;
+ (id)_urlForProposedName:originalURL:error:;
@end
