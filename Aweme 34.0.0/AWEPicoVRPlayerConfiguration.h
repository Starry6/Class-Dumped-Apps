@interface AWEPicoVRPlayerConfiguration : NSObject
@property (nonatomic) NSString itemID;
@property (nonatomic) NSNumber zoomValue;
@property (nonatomic) NSNumber headTracking;
@property (nonatomic) q scopicType;
@property (nonatomic) NSNumber rotationPitch;
@property (nonatomic) NSNumber rotationYaw;
@property (nonatomic) NSNumber rotationRoll;
@property (nonatomic) NSDictionary optionDict;
- (void)setScopicType:;
- (long long)scopicType;
- (void)setHeadTracking:;
- (id)zoomValue;
- (id)headTracking;
- (id)rotationPitch;
- (id)rotationYaw;
- (id)rotationRoll;
- (id)optionDict;
- (void)setZoomValue:;
- (void)setOptionDict:;
- (void)setRotationPitch:;
- (void)setRotationYaw:;
- (void)setRotationRoll:;
- (id)itemID;
- (void)setItemID:;
- (void).cxx_destruct;
@end
