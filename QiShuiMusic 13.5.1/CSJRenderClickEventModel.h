@interface CSJRenderClickEventModel : NSObject
@property (nonatomic) q areaType;
@property (nonatomic) NSString clickAreaType;
@property (nonatomic) NSString clickAreaId;
@property (nonatomic) NSDictionary clickInfo;
@property (nonatomic) NSDictionary rectInfo;
@property (nonatomic) q userBehaviorType;
@property (nonatomic) q clickAreaCategory;
@property (nonatomic) NSString clickScene;
@property (nonatomic) NSString subConvertLinkTag;
@property (nonatomic) q dpaPosition;
@property (nonatomic) q convertActionType;
- (void)setClickAreaId:;
- (void)setDpaPosition:;
- (long long)clickAreaCategory;
- (id)clickAreaId;
- (id)clickAreaType;
- (id)clickInfo;
- (id)clickScene;
- (long long)convertActionType;
- (long long)dpaPosition;
- (id)rectInfo;
- (void)setClickAreaCategory:;
- (void)setClickAreaType:;
- (void)setClickInfo:;
- (void)setClickScene:;
- (void)setConvertActionType:;
- (void)setRectInfo:;
- (void)setSubConvertLinkTag:;
- (void)setUserBehaviorType:;
- (id)subConvertLinkTag;
- (long long)userBehaviorType;
- (id)init;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (long long)areaType;
- (void)setAreaType:;
@end
