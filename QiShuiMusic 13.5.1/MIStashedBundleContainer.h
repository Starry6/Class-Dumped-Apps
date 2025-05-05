@interface MIStashedBundleContainer : MIRelocatedBundleContainer
@property (nonatomic) NSURL stashMetadataURL;
@property (nonatomic) MIStashMetadata stashMetadata;
- (void).cxx_destruct;
- (id)stashMetadataURL;
- (id)newStashMetadata;
- (id)stashMetadataWithError:;
- (BOOL)saveStashMetadata:withError:;
- (id)stashMetadata;
- (void)setStashMetadata:;
@end
