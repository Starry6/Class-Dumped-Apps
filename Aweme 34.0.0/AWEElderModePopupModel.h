@interface AWEElderModePopupModel : MTLModel
@property (nonatomic) NSString leftBtnText;
@property (nonatomic) NSString rightBtnText;
@property (nonatomic) NSArray valuePoints;
@property (nonatomic) q frequencyDailyCtrl;
@property (nonatomic) q newUserPopAt;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)valuePoints;
- (long long)newUserPopAt;
- (long long)frequencyDailyCtrl;
- (id)leftBtnText;
- (id)rightBtnText;
- (void).cxx_destruct;
- (id)title;
+ (id)valuePointsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
