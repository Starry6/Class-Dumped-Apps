@interface BDWebImageAllowLogTypeConfig : NSObject
@property (nonatomic) double monitorRate;
@property (nonatomic) double errorMonitorRate;
@property (nonatomic) double largeSizeRate;
@property (nonatomic) double sensibleRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMonitorRate:;
- (double)errorMonitorRate;
- (double)largeSizeRate;
- (double)monitorRate;
- (double)sensibleRate;
- (void)setErrorMonitorRate:;
- (void)setLargeSizeRate:;
- (void)setSensibleRate:;
+ (id)modelCustomPropertyMapper;
@end
