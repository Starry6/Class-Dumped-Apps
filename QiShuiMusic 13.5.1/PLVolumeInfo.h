@interface PLVolumeInfo : NSObject
@property (nonatomic) Q volumeSize;
@property (nonatomic) q availableSpace;
@property (nonatomic) Q desiredDiskThreshold;
@property (nonatomic) Q nearLowDiskThreshold;
@property (nonatomic) Q lowDiskThreshold;
@property (nonatomic) Q veryLowDiskThreshold;
- (long long)availableSpace;
- (unsigned long long)veryLowDiskThreshold;
- (unsigned long long)nearLowDiskThreshold;
- (unsigned long long)desiredDiskThreshold;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)initWithMountPoint:;
- (unsigned long long)volumeSize;
- (unsigned long long)lowDiskThreshold;
@end
