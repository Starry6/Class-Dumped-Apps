@interface FPNonEvictableItemsQueryDescriptor : FPSpotlightQueryDescriptor
- (id)name;
- (id)queryStringForMountPoint:;
- (unsigned long long)desiredCount;
- (void)augmentQueryContext:;
@end
