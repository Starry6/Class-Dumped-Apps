@interface IESECBaseShowEventModel : MTLModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary trackExtraParams;
@property (nonatomic) NSString eventId;
@property (nonatomic) NSString btmID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)btmID;
- (void)setBtmID:;
- (void)setTrackExtraParams:;
- (id)trackExtraParams;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventId;
- (void)setEventId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
