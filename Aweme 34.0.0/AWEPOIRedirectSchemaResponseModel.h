@interface AWEPOIRedirectSchemaResponseModel : AWEBaseApiModel
@property (nonatomic) q eventType;
@property (nonatomic) NSString redirectSchema;
@property (nonatomic) NSString toastContent;
@property (nonatomic) AWEPOIRedirectSchemaAlertModel alertInfo;
- (id)toastContent;
- (void)setToastContent:;
- (id)redirectSchema;
- (void)setRedirectSchema:;
- (void)setEventType:;
- (long long)eventType;
- (void).cxx_destruct;
- (id)alertInfo;
- (void)setAlertInfo:;
+ (id)eventTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
