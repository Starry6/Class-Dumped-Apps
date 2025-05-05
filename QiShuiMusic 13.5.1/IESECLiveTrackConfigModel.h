@interface IESECLiveTrackConfigModel : MTLModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary eventParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEventParams:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventParams;
+ (id)JSONKeyPathsByPropertyKey;
@end
