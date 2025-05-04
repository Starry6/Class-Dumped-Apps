@interface AWECommentMusicInfoModel : MTLModel
@property (nonatomic) q status;
@property (nonatomic) NSNumber musicId;
@property (nonatomic) q jumpType;
@property (nonatomic) AWEMusicModel musicModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMusicId:;
- (id)musicModel;
- (long long)jumpType;
- (id)musicId;
- (void)setMusicModel:;
- (void)setJumpType:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
+ (id)JSONKeyPathsByPropertyKey;
@end
