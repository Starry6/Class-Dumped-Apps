@interface AWEPOIPreviewPageLogModel : MTLModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary mobParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mobParams;
- (void)setMobParams:;
- (void)trackWithExtraParams:;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
+ (id)JSONKeyPathsByPropertyKey;
@end
