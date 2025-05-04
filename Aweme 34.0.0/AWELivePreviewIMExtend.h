@interface AWELivePreviewIMExtend : MTLModel
@property (nonatomic) q imExtendType;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (long long)imExtendType;
- (void)setImExtendType:;
- (id)icon;
- (id)extra;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)mainTitle;
- (void)setMainTitle:;
+ (id)iconJSONTransformer;
+ (id)parseFromOriginRoomModel:;
@end
