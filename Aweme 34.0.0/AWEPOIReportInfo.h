@interface AWEPOIReportInfo : MTLModel
@property (nonatomic) q userTypeCode;
@property (nonatomic) NSString reportSchema;
@property (nonatomic) NSString reportText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reportSchema;
- (void)setReportSchema:;
- (id)reportText;
- (long long)userTypeCode;
- (void)setReportText:;
- (void)setUserTypeCode:;
- (id)userType;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
