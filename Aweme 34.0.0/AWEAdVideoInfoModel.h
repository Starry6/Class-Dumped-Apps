@interface AWEAdVideoInfoModel : MTLModel
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber duration;
@property (nonatomic) NSString dashVideoModel;
@property (nonatomic) NSNumber groupID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dashVideoModel;
- (void)setDashVideoModel:;
- (void)setGroupID:;
- (void)setHeight:;
- (id)groupID;
- (void)setWidth:;
- (void)setDuration:;
- (id)width;
- (void).cxx_destruct;
- (id)duration;
- (id)height;
+ (id)JSONKeyPathsByPropertyKey;
@end
