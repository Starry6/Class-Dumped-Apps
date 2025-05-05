@interface LSServerOpenStagingIOPersonality : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mainUserContainerURL;
- (id)makeStagingDirectoryNodeInContainer:error:;
- (id)stagingDirectoryKeyForFileHandle:error:;
- (id)stagingDirectoryKeyForNode:error:;
- (id)stagingDirectoryInfoForPersonaUniqueString:error:;
@end
