@interface AWELiveStreamExtraInfoModel : MTLModel
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) AWELiveAdaptionInfo adaptionInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)adaptionInfo;
- (id)liveStreamExtra;
- (void)setAdaptionInfo:;
- (void)setHeight:;
- (void)setWidth:;
- (id)width;
- (void).cxx_destruct;
- (id)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
