@interface SABinaryLoadInfoTrackingHighestOffset : SABinaryLoadInfo
@property (nonatomic) Q highestOffset;
- (BOOL)isInKernelAddressSpace;
- (unsigned long long)highestOffset;
- (void)setHighestOffset:;
@end
