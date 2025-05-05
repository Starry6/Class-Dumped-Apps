@interface SFTabGroupActivityItemConfiguration : NSObject
@property (nonatomic) NSItemProvider itemProvider;
@property (nonatomic) WBTabGroup tabGroup;
@property (nonatomic) NSArray itemProvidersForActivityItemsConfiguration;
@property (nonatomic) NSArray applicationActivitiesForActivityItemsConfiguration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (id)itemProvider;
- (id)tabGroup;
- (id)activityItemsConfigurationMetadataForKey:;
- (id)activityItemsConfigurationMetadataForItemAtIndex:key:;
- (id)itemProvidersForActivityItemsConfiguration;
- (id)initWithTabGroup:existingShare:icon:;
- (void)updateMetadataIcon:;
- (void)_beginSharingTabGroupWithCompletionHandler:;
- (void)_presentSharedTabGroupsManateePrompt;
@end
