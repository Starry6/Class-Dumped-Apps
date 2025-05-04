@interface AWEUserProfileSpecificationTip : MTLModel
@property (nonatomic) AWEUserProfileSpecificationTaskInfo taskInfo;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) NSString eventKey;
@property (nonatomic) NSString eventTrackingString;
@property (nonatomic) NSDictionary eventTracking;
@property (nonatomic) NSDictionary eventParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (void)setEventParams:;
- (id)eventTracking;
- (void)setEventTracking:;
- (id)eventTrackingString;
- (void)trackWithParams:type:;
- (void)setEventTrackingString:;
- (id)eventKey;
- (void).cxx_destruct;
- (id)taskInfo;
- (void)setEventKey:;
- (void)setTaskInfo:;
- (id)eventParams;
+ (id)taskInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
