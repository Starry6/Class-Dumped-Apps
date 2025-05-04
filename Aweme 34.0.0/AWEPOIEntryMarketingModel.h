@interface AWEPOIEntryMarketingModel : AWEPOIEntryModel
@property (nonatomic) NSNumber activityID;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSString cityCode;
- (void)setSchemaURL:;
- (id)schemaURL;
- (void).cxx_destruct;
- (id)activityID;
- (void)setActivityID:;
- (id)cityCode;
- (void)setCityCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
