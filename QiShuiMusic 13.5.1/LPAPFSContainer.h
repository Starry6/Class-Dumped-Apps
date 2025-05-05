@interface LPAPFSContainer : LPMedia
- (id)volumes;
- (id)updateVolume;
- (id)addVolumeWithName:role:caseSensitive:reserveSize:quotaSize:pairedVolume:error:;
- (id)physicalStores;
- (id)volumesWithRole:;
- (id)prebootVolume;
- (id)recoveryVolume;
+ (id)supportedContentTypes;
+ (id)allAPFSContainers;
+ (id)diagsContainer;
@end
