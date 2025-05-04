@interface AWEAnchorTrackModel : MTLModel
@property (nonatomic) NSArray trackShowInfo;
@property (nonatomic) NSArray trackClickInfo;
@property (nonatomic) NSString btm;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)btm;
- (void)setBtm:;
- (void)setTrackShowInfo:;
- (void)setTrackClickInfo:;
- (id)trackShowInfo;
- (id)trackClickInfo;
- (void).cxx_destruct;
+ (id)trackClickInfoJSONTransformer;
+ (id)trackShowInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
