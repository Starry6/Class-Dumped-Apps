@interface IESECTabKitTrackEventModel : MTLModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSString onceKey;
@property (nonatomic) NSDictionary params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)onceKey;
- (void)setOnceKey:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)JSONKeyPathsByPropertyKey;
@end
