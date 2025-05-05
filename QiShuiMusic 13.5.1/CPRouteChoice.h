@interface CPRouteChoice : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSArray summaryVariants;
@property (nonatomic) NSArray additionalInformationVariants;
@property (nonatomic) NSArray selectionSummaryVariants;
@property (nonatomic) @ userInfo;
- (id)init;
- (id)userInfo;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSummaryVariants:additionalInformationVariants:selectionSummaryVariants:;
- (id)summaryVariants;
- (void)setSummaryVariants:;
- (id)selectionSummaryVariants;
- (void)setSelectionSummaryVariants:;
- (id)additionalInformationVariants;
- (void)setAdditionalInformationVariants:;
+ (BOOL)supportsSecureCoding;
@end
