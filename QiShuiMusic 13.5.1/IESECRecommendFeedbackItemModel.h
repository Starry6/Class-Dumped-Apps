@interface IESECRecommendFeedbackItemModel : MTLModel
@property (nonatomic) NSString icon;
@property (nonatomic) NSString text;
@property (nonatomic) q trackEventType;
@property (nonatomic) NSString abbreviation;
@property (nonatomic) NSString moreText;
@property (nonatomic) BOOL shouldShowArrow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowArrow;
- (void)setShouldShowArrow:;
- (void)setTrackEventType:;
- (long long)trackEventType;
- (void)setText:;
- (id)icon;
- (id)moreText;
- (void)setMoreText:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)text;
- (id)abbreviation;
- (void)setAbbreviation:;
+ (id)JSONKeyPathsByPropertyKey;
@end
