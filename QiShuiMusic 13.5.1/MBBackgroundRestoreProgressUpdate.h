@interface MBBackgroundRestoreProgressUpdate : NSObject
@property (nonatomic) BOOL isThermallyThrottled;
@property (nonatomic) BOOL hasCellularPolicy;
@property (nonatomic) BOOL isOnWiFi;
@property (nonatomic) BOOL isOnInexpensiveCellular;
@property (nonatomic) Q estimatedSize;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)estimatedSize;
- (void)setEstimatedSize:;
- (BOOL)isThermallyThrottled;
- (void)setIsThermallyThrottled:;
- (BOOL)hasCellularPolicy;
- (void)setHasCellularPolicy:;
- (BOOL)isOnWiFi;
- (void)setIsOnWiFi:;
- (BOOL)isOnInexpensiveCellular;
- (void)setIsOnInexpensiveCellular:;
+ (BOOL)supportsSecureCoding;
@end
