@interface IESLiveStartAutoMatchParamModel : IESLiveBridgeModel
@property (nonatomic) NSNumber matchType;
@property (nonatomic) NSNumber matchStyleType;
@property (nonatomic) NSNumber scene;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString source;
@property (nonatomic) NSString extra;
- (id)matchStyleType;
- (void)setExtra:;
- (void)setMatchStyleType:;
- (id)activityType;
- (void)setActivityType:;
- (id)extra;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (id)matchType;
- (void)setMatchType:;
+ (id)modelCustomPropertyMapper;
@end
