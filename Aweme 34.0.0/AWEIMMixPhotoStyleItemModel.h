@interface AWEIMMixPhotoStyleItemModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSNumber memberCount;
@property (nonatomic) NSString backgroundUrl;
@property (nonatomic) NSString styleId;
@property (nonatomic) q type;
@property (nonatomic) NSString showTag;
@property (nonatomic) NSString loraStyleId;
@property (nonatomic) NSArray configs;
@property (nonatomic) NSString effectId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)backgroundUrl;
- (void)setBackgroundUrl:;
- (void)setConfigs:;
- (void)setMemberCount:;
- (id)showTag;
- (void)setShowTag:;
- (id)loraStyleId;
- (id)jumpConfigList;
- (id)subtitle;
- (id)memberCount;
- (void)setSubtitle:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)effectId;
- (id)configs;
- (id)styleId;
- (void)setStyleId:;
- (void)setEffectId:;
- (void)setLoraStyleId:;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
