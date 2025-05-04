@interface AWERelatedFeedHotSpot : MTLModel
@property (nonatomic) NSString hotspotTimeLine;
@property (nonatomic) NSString cursor;
@property (nonatomic) NSString lightIconUrl;
@property (nonatomic) NSString darkIconUrl;
@property (nonatomic) NSString timelineSchema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)darkIconUrl;
- (id)lightIconUrl;
- (void)setLightIconUrl:;
- (void)setDarkIconUrl:;
- (id)hotspotTimeLine;
- (void)setHotspotTimeLine:;
- (id)timelineSchema;
- (void)setTimelineSchema:;
- (id)cursor;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
