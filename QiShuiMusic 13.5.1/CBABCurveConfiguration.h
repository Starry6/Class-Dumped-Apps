@interface CBABCurveConfiguration : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSNumber vendorID;
@property (nonatomic) NSNumber productID;
@property (nonatomic) NSNumber maxBrightness;
@property (nonatomic) BOOL isBuiltin;
@property (nonatomic) BOOL isEnergySaving;
- (id)productID;
- (void)setVendorID:;
- (id)vendorID;
- (void)dealloc;
- (void)setProductID:;
- (id)uuid;
- (void)setUuid:;
- (id)description;
- (id)maxBrightness;
- (void)setMaxBrightness:;
- (BOOL)isBuiltin;
- (void)setIsBuiltin:;
- (BOOL)isEnergySaving;
- (void)setIsEnergySaving:;
@end
