@interface AWEGrouponTaskDispatchLynxModel : MTLModel
@property (nonatomic) NSArray targetCard;
@property (nonatomic) NSString sendType;
@property (nonatomic) AWEGrouponTaskDispatchLynxEventInfoModel eventInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sendType;
- (void)setSendType:;
- (id)targetCard;
- (void)setTargetCard:;
- (void).cxx_destruct;
- (id)eventInfo;
- (void)setEventInfo:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)targetCardJSONTransformer;
+ (id)eventInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
