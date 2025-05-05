@interface PFUbiquityLocation : NSObject
@property (nonatomic) Q hash;
- (id)init;
- (void)dealloc;
- (void)setHash:;
- (unsigned long long)hash;
- (void)setFilename:;
- (void)setStoreName:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setUbiquityLocationType:;
- (void)setExportingPeerID:;
- (void)setModelVersionHash:;
- (void)setOtherPathComponents:;
- (void)setUbiquityRootLocationPath:;
- (void)setUbiquityRootLocation:;
- (void)setIsRootUbiquitous:;
- (BOOL)isEqualToURL:;
@end
