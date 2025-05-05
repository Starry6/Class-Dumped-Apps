@interface MSUDataAccessorRestore : MSUDataAccessor
- (id)copyPathForPersonalizedData:error:;
- (id)specialCaseAPTicketForRamdiskWithError:;
- (id)getVolumeWithUUID:;
- (id)copyMountPointForVolumeType:error:;
- (id)findVolumesWithRole:;
@end
