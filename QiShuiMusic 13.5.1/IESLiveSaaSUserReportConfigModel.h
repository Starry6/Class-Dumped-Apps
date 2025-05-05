@interface IESLiveSaaSUserReportConfigModel : BDDynamicMTLModel
@property (nonatomic) NSNumber enableMore;
@property (nonatomic) IESLiveSaaSUserReportPersonCardConfigModel personcardConfig;
@property (nonatomic) NSArray longPressItemConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)personcardConfigJSONTransformer;
+ (id)configFromSettings;
+ (id)dictFromSettings;
+ (id)JSONKeyPathsByPropertyKey;
@end
