@interface AFMemoryInfo : NSObject
@property (nonatomic) Q virtualMemorySizeInBytes;
@property (nonatomic) NSInteger numberOfRegions;
@property (nonatomic) NSInteger pageSizeInBytes;
@property (nonatomic) Q residentMemorySizeInBytes;
@property (nonatomic) Q peakResidentMemorySizeInBytes;
@property (nonatomic) Q physicalMemoryFootprintInBytes;
- (id)init;
- (id)mutatedCopyWithMutator:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (unsigned long long)peakResidentMemorySizeInBytes;
- (id)_descriptionWithIndent:;
- (id)initWithBuilder:;
- (int)pageSizeInBytes;
- (void)encodeWithCoder:;
- (unsigned long long)virtualMemorySizeInBytes;
- (int)numberOfRegions;
- (id)description;
- (id)initWithVirtualMemorySizeInBytes:numberOfRegions:pageSizeInBytes:residentMemorySizeInBytes:peakResidentMemorySizeInBytes:physicalMemoryFootprintInBytes:;
- (unsigned long long)residentMemorySizeInBytes;
- (BOOL)isEqual:;
- (unsigned long long)physicalMemoryFootprintInBytes;
- (id)copyWithZone:;
+ (id)newWithBuilder:;
+ (BOOL)supportsSecureCoding;
@end
