@interface PTYMetaFeatureDescription : NSObject
@property (nonatomic) NSString featureName;
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString eventFilter;
@property (nonatomic) NSString eventParamsFieldName;
@property (nonatomic) Q featureType;
- (id)eventParamsFieldName;
- (void)setEventParamsFieldName:;
- (unsigned long long)featureType;
- (id)featureName;
- (id)eventName;
- (void)setEventName:;
- (void)setFeatureName:;
- (void).cxx_destruct;
- (id)eventFilter;
- (void)setEventFilter:;
- (void)setFeatureType:;
@end
