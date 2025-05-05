@interface IESECTabKitTrackConfigModel : MTLModel
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) NSArray showEvents;
@property (nonatomic) NSArray clickEvents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClickEvents:;
- (id)clickEvents;
- (id)commonParams;
- (void)setCommonParams:;
- (void)setShowEvents:;
- (id)showEvents;
- (void).cxx_destruct;
+ (id)clickEventsJSONTransformer;
+ (id)showEventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
