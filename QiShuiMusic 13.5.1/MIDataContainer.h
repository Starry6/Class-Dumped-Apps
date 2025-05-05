@interface MIDataContainer : MIContainer
@property (nonatomic) NSInteger contentProtectionClass;
- (int)contentProtectionClass;
- (void)setContentProtectionClass:;
- (id)_oldCompatiblityLinkDestination;
- (void)makeSymlinkToBundleInContainerIfNeeded:;
+ (id)dataContainerForExecutableBundle:createIfNeeded:temporary:created:error:;
@end
