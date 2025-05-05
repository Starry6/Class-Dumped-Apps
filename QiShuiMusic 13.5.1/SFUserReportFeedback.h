@interface SFUserReportFeedback : SFFeedback
@property (nonatomic) SFSearchResult result;
@property (nonatomic) SFCardSection cardSection;
@property (nonatomic) SFPunchout userSelection;
@property (nonatomic) NSArray sections;
@property (nonatomic) NSString uploadedDataIdentifier;
@property (nonatomic) NSInteger reportType;
- (id)cardSection;
- (id)sections;
- (id)result;
- (void)setCardSection:;
- (id)initWithCoder:;
- (void)setReportType:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSections:;
- (int)reportType;
- (void)setResult:;
- (id)copyWithZone:;
- (id)userSelection;
- (void)setUserSelection:;
- (id)uploadedDataIdentifier;
- (void)setUploadedDataIdentifier:;
- (id)initWithSelection:result:cardSection:resultSections:uploadedDataIdentifier:userReportRequestType:;
- (id)initWithSelection:result:cardSection:;
+ (BOOL)supportsSecureCoding;
@end
