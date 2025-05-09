@interface IESIMMixVideoModel : IESIMBaseApiModel
@property (nonatomic) NSArray shareExtVideoCoverURLs;
@property (nonatomic) NSString mixID;
@property (nonatomic) NSString mixName;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString extra;
@property (nonatomic) IESIMUserModel author;
@property (nonatomic) IESIMURLModel coverUrl;
@property (nonatomic) IESIMURLModel iconUrl;
@property (nonatomic) IESIMMixVideoStatusModel statusModel;
@property (nonatomic) IESIMMixVideoStaticsModel staticsModel;
@property (nonatomic) IESIMShareModel shareInfo;
@property (nonatomic) Q mixType;
@property (nonatomic) IESIMMixAuthorInfoModel autoMixAuthorInfo;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) NSNumber updateTime;
- (id)iconUrl;
- (id)mixName;
- (unsigned long long)mixType;
- (id)autoMixAuthorInfo;
- (id)coverUrl;
- (id)mixID;
- (void)setAutoMixAuthorInfo:;
- (void)setCoverUrl:;
- (void)setExtra:;
- (void)setIconUrl:;
- (void)setMixID:;
- (void)setMixName:;
- (void)setMixType:;
- (void)setShareExtVideoCoverURLs:;
- (void)setStaticsModel:;
- (id)shareExtVideoCoverURLs;
- (id)staticsModel;
- (id)extra;
- (id)desc;
- (id)createTime;
- (void)setDesc:;
- (id)author;
- (id)shareInfo;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setCreateTime:;
- (void)setShareInfo:;
- (id)updateTime;
- (void)setUpdateTime:;
- (id)statusModel;
- (void)setStatusModel:;
+ (id)authorInfoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)coverUrlJSONTransformer;
+ (id)iconUrlJSONTransformer;
+ (id)shareInfoModelJSONTransformer;
+ (id)staticsModelJSONTransformer;
+ (id)statusModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
