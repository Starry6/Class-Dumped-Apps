@interface BDXBridgeAppShareDouyinPublishMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString dataURL;
@property (nonatomic) NSString contentType;
@property (nonatomic) NSString shareDouyinTitle;
@property (nonatomic) NSString activityName;
@property (nonatomic) NSString douyinShareId;
@property (nonatomic) NSString douyinMusicId;
@property (nonatomic) NSArray hashTags;
@property (nonatomic) NSArray extraDataURLs;
@property (nonatomic) NSDictionary eventParams;
- (void)setEventParams:;
- (id)douyinMusicId;
- (id)douyinShareId;
- (id)extraDataURLs;
- (id)hashTags;
- (void)setDouyinMusicId:;
- (void)setDouyinShareId:;
- (void)setExtraDataURLs:;
- (void)setHashTags:;
- (void)setShareDouyinTitle:;
- (id)shareDouyinTitle;
- (void)setContentType:;
- (id)contentType;
- (void).cxx_destruct;
- (id)activityName;
- (void)setActivityName:;
- (id)dataURL;
- (void)setDataURL:;
- (id)eventParams;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
