@interface AWEPOIVideoRelatedEventParamsConfig : NSObject
@property (nonatomic) NSString enterMethodForFirstEnter;
@property (nonatomic) NSString enterMethodForSlide;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q eventType;
- (void)setExtraParams:;
- (id)extraParams;
- (id)enterMethodForFirstEnter;
- (id)enterMethodForSlide;
- (void)setEnterMethodForFirstEnter:;
- (void)setEnterMethodForSlide:;
- (void)setEventType:;
- (unsigned long long)eventType;
- (void).cxx_destruct;
- (id)convertToDictionary;
+ (id)firstClickEnterMethodKey;
+ (id)slideEnterMethodKey;
+ (id)extraParamsKeyInLogExtraTrackerData;
+ (id)eventTypeKey;
+ (id)configInstanceFromDictionary:;
+ (id)configsArrayKeyInLogExtraPOIVideoPlayDictionary;
+ (id)videoPlayEventKey;
@end
