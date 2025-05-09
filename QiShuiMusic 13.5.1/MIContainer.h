@interface MIContainer : NSObject
@property (nonatomic) Q containerClass;
@property (nonatomic) Q status;
@property (nonatomic) Q diskUsage;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString debugDescriptionForContainer;
@property (nonatomic) ^{container_object_s=} container;
@property (nonatomic) NSURL containerURL;
@property (nonatomic) BOOL isTransient;
@property (nonatomic) NSString personaUniqueString;
- (id)personaUniqueString;
- (void)setStatus:;
- (void)dealloc;
- (id)initWithContainer:error:;
- (id)container;
- (id)identifier;
- (unsigned long long)containerClass;
- (void).cxx_destruct;
- (void)setContainerClass:;
- (BOOL)isTransient;
- (id)containerURL;
- (id)description;
- (unsigned long long)status;
- (void)setIdentifier:;
- (unsigned long long)diskUsage;
- (id)debugDescriptionForContainer;
- (id)initWithContainerURL:;
- (BOOL)_doInitConsumingContainer:error:;
- (id)initWithToken:options:error:;
- (BOOL)_deriveContainerStatusWithError:;
- (BOOL)_refreshContainerMetadataWithError:;
- (BOOL)_setContainer:error:;
- (BOOL)removeUnderlyingContainerWaitingForDeletion:error:;
- (BOOL)_replaceExistingContainer:replacementReason:waitForDeletion:error:;
- (BOOL)recreateDefaultStructureWithError:;
- (BOOL)makeContainerLiveReplacingContainer:reason:waitForDeletion:withError:;
- (BOOL)makeContainerLiveWithError:;
- (BOOL)setInfoValue:forKey:error:;
- (id)infoValueForKey:error:;
- (BOOL)regenerateDirectoryUUIDWithError:;
- (BOOL)purgeContentWithError:;
- (BOOL)captureStoreDataFromDirectory:doCopy:failureIsFatal:withError:;
- (void)setDiskUsage:;
+ (BOOL)_deleteContainers:count:waitForDeletion:error:;
+ (BOOL)removeContainers:waitForDeletion:error:;
+ (id)_containersForIdentifier:groupContainerIdentifier:ofContentClass:forPersona:error:;
+ (id)_copyContainerForIdentifier:ofContentClass:forPersona:transient:create:created:error:;
+ (id)groupContainerURLsForBundleIdentifier:persona:error:;
+ (id)_copyContainerForSerializedReference:matchingWithOptions:error:;
+ (id)tempContainerWithIdentifier:ofContentClass:error:;
+ (id)containerWithIdentifier:ofContentClass:createIfNeeded:created:error:;
+ (id)containersWithClass:error:;
+ (id)containersWithClass:personaUniqueString:error:;
+ (id)_bundleContainerForIdentifier:error:;
+ (id)allContainersForIdentifier:options:error:;
@end
