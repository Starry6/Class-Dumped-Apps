@interface AWEUserActivityModel : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString contentDescription;
@property (nonatomic) BOOL eligibleForHandoff;
@property (nonatomic) BOOL eligibleForSearch;
@property (nonatomic) BOOL eligibleForPrediction;
@property (nonatomic) NSString scheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scheme;
- (void)setScheme:;
- (id)contentDescription;
- (BOOL)eligibleForHandoff;
- (void)setContentDescription:;
- (BOOL)eligibleForPrediction;
- (void)setEligibleForPrediction:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setEligibleForHandoff:;
- (void)setTitle:;
- (BOOL)eligibleForSearch;
- (void)setEligibleForSearch:;
+ (id)JSONKeyPathsByPropertyKey;
@end
