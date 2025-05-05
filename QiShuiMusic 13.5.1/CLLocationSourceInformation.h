@interface CLLocationSourceInformation : NSObject
@property (nonatomic) BOOL isSimulatedBySoftware;
@property (nonatomic) BOOL isProducedByAccessory;
- (id)initWithCoder:;
- (BOOL)isSimulatedBySoftware;
- (id)initWithSoftwareSimulationState:andExternalAccessoryState:;
- (void)encodeWithCoder:;
- (BOOL)isProducedByAccessory;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
