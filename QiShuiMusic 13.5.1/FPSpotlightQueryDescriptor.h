@interface FPSpotlightQueryDescriptor : NSObject
@property (nonatomic) FPQueryEnumerationSettings settings;
@property (nonatomic) NSString name;
- (id)init;
- (id)settings;
- (unsigned long long)hash;
- (id)initWithSettings:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)queryStringForMountPoint:;
- (unsigned long long)desiredCount;
- (void)augmentQueryContext:;
- (BOOL)supportsQueryingAllMountPoints;
- (BOOL)isEqualToItemQueryDescriptor:;
- (BOOL)keepCollectorsAlive;
@end
