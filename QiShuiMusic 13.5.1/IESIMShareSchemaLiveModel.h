@interface IESIMShareSchemaLiveModel : IESIMBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSNumber anchorID;
@property (nonatomic) NSString title;
@property (nonatomic) q userCount;
@property (nonatomic) IESIMShareSchemaLiveCoverModel cover;
- (id)anchorID;
- (id)cover;
- (void)setAnchorID:;
- (void)setCover:;
- (void)setStatus:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (long long)status;
- (long long)userCount;
- (void)setUserCount:;
- (id)roomID;
- (void)setRoomID:;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
