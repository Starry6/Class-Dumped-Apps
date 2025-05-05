@interface IESECListKitDeviceScoreConfig : MTLModel
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)min;
- (double)max;
- (void)setMax:;
- (void)setMin:;
+ (id)JSONKeyPathsByPropertyKey;
@end
