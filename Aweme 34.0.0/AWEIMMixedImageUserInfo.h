@interface AWEIMMixedImageUserInfo : MTLModel
@property (nonatomic) NSString uid;
@property (nonatomic) q briefTimestamp;
@property (nonatomic) AWEIMImageResourceURLInfo resourceURL;
@property (nonatomic) AWEIMMixAILoraUserInfo loraInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString resURL;
@property (nonatomic) NSString resObjectID;
@property (nonatomic) NSString resSecretKey;
@property (nonatomic) NSString resMD5;
@property (nonatomic) NSString originMD5;
@property (nonatomic) q resFileSize;
@property (nonatomic) AWEURLModel resourceURLModel;
@property (nonatomic) AWEURLModel largeResourceURLModel;
@property (nonatomic) AWEURLModel mediumResourceURLModel;
@property (nonatomic) AWEURLModel thumbResourceURLModel;
@property (nonatomic) {CGSize=dd} coverSize;
- (id)coverSize;
- (long long)resFileSize;
- (void)setResObjectID:;
- (void)setResSecretKey:;
- (void)setResFileSize:;
- (void)setCoverSize:;
- (id)resObjectID;
- (id)resSecretKey;
- (id)loraInfo;
- (void)setLoraInfo:;
- (id)resURL;
- (id)resMD5;
- (void)setResURL:;
- (void)setResMD5:;
- (long long)briefTimestamp;
- (id)originMD5;
- (void)setOriginMD5:;
- (id)resourceURLModel;
- (id)largeResourceURLModel;
- (id)mediumResourceURLModel;
- (id)thumbResourceURLModel;
- (void)setBriefTimestamp:;
- (id)resourceURL;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (void)setResourceURL:;
+ (id)resourceURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
