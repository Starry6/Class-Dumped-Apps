@interface IESVideoBSBandWidthModel : MTLModel
@property (nonatomic) NSNumber bitrate;
@property (nonatomic) NSNumber minNetwork;
@property (nonatomic) NSNumber maxNetwork;
@property (nonatomic) NSNumber speed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)maxNetwork;
- (id)minNetwork;
- (void)setMaxNetwork:;
- (void)setMinNetwork:;
- (void)setSpeed:;
- (id)bitrate;
- (id)speed;
- (void).cxx_destruct;
- (id)description;
- (void)setBitrate:;
+ (id)JSONKeyPathsByPropertyKey;
@end
