@interface IESVideoBSConfigModel : MTLModel
@property (nonatomic) NSNumber bitrate;
@property (nonatomic) NSNumber minNetwork;
@property (nonatomic) NSNumber maxNetwork;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)maxNetwork;
- (id)minNetwork;
- (void)setMaxNetwork:;
- (void)setMinNetwork:;
- (id)bitrate;
- (void).cxx_destruct;
- (id)description;
- (void)setBitrate:;
+ (id)JSONKeyPathsByPropertyKey;
@end
