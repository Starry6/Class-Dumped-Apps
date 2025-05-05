@interface MIPluginDataContainer : MIDataContainer
@property (nonatomic) NSString parentBundleID;
- (void)setParentBundleID:;
- (id)parentBundleID;
- (void).cxx_destruct;
+ (id)pluginDataContainerWithIdentifier:createIfNeeded:created:error:;
@end
