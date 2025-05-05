@interface MIRelocatedBundleContainer : MIBundleContainer
- (unsigned long long)diskUsage;
- (BOOL)makeContainerLiveReplacingContainer:reason:waitForDeletion:withError:;
- (BOOL)makeContainerLiveWithError:;
- (BOOL)regenerateDirectoryUUIDWithError:;
- (BOOL)purgeContentWithError:;
- (BOOL)shouldHaveCorrespondingDataContainer;
@end
