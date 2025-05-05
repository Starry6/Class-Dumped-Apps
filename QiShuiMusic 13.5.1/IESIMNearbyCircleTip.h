@interface IESIMNearbyCircleTip : IESIMBaseApiModel
@property (nonatomic) NSNumber circleID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray relativeUsers;
- (id)circleID;
- (id)relativeUsers;
- (void)setCircleID:;
- (void)setRelativeUsers:;
- (id)content;
- (void)setContent:;
- (void)setTitle:;
- (id)title;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)relativeUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
