@interface BDLynxGurdModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_syncDefaultPriorityResources;
- (void)_syncHighPriorityResources;
- (void)_syncResourcesWithChannels:options:completion:;
- (id)accessKeyDirectory;
- (void)bytedSettingDidChange;
- (BOOL)enableGurd;
- (BOOL)isSingleLynxFileForChannel:;
- (id)lynxFilePathForChannel:;
- (void)syncResourcesIfNeeded;
- (void)syncResourcesWithChannel:accessKey:completion:;
- (void)syncResourcesWithChannel:completion:;
- (void)syncResourcesWithChannel:isUrgent:completion:;
+ (void)lynxLazyLoad;
+ (id)sharedInstance;
@end
