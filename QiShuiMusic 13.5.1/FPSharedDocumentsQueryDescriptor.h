@interface FPSharedDocumentsQueryDescriptor : FPSpotlightQueryDescriptor
- (id)name;
- (id)queryStringForMountPoint:;
- (BOOL)supportsQueryingAllMountPoints;
@end
