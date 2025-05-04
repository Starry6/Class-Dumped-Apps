@interface AWENearbyCircleTip : AWEBaseApiModel
@property (nonatomic) NSNumber circleID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray relativeUsers;
- (id)relativeUsers;
- (id)circleID;
- (void)setCircleID:;
- (void)setRelativeUsers:;
- (id)content;
- (void)setContent:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)relativeUsersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
