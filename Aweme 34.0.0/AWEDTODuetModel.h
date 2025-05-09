@interface AWEDTODuetModel : MTLModel
@property (nonatomic) <ACCAwemeModelProtocol> sourceAweme;
@property (nonatomic) NSString duetItemId;
@property (nonatomic) NSString duetOrigin;
@property (nonatomic) NSString duetLayout;
@property (nonatomic) NSString duetVideoPath;
@property (nonatomic) NSString fixedPartOfTitle;
@property (nonatomic) q chainLength;
@property (nonatomic) q step;
@property (nonatomic) BOOL isDuetSing;
@property (nonatomic) BOOL isDuetUpload;
@property (nonatomic) q duetUploadType;
@property (nonatomic) NSString duetGroupId;
@property (nonatomic) q duetGroupDuration;
@property (nonatomic) NSString mainMusicId;
@property (nonatomic) q materialMediaType;
@property (nonatomic) NSString originDuetResourceUri;
@property (nonatomic) q duetCreateMediaType;
@property (nonatomic) q duetCreateDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)duetItemId;
- (void)setDuetItemId:;
- (id)duetOrigin;
- (void)setDuetOrigin:;
- (id)duetLayout;
- (void)setDuetLayout:;
- (id)duetVideoPath;
- (void)setDuetVideoPath:;
- (id)fixedPartOfTitle;
- (void)setFixedPartOfTitle:;
- (long long)chainLength;
- (void)setChainLength:;
- (BOOL)isDuetSing;
- (void)setIsDuetSing:;
- (BOOL)isDuetUpload;
- (void)setIsDuetUpload:;
- (long long)duetUploadType;
- (void)setDuetUploadType:;
- (id)duetGroupId;
- (void)setDuetGroupId:;
- (long long)duetGroupDuration;
- (void)setDuetGroupDuration:;
- (id)mainMusicId;
- (void)setMainMusicId:;
- (long long)materialMediaType;
- (void)setMaterialMediaType:;
- (id)originDuetResourceUri;
- (void)setOriginDuetResourceUri:;
- (long long)duetCreateMediaType;
- (void)setDuetCreateMediaType:;
- (long long)duetCreateDuration;
- (void)setDuetCreateDuration:;
- (void)setSourceAweme:;
- (id)sourceAweme;
- (long long)step;
- (void).cxx_destruct;
- (void)setStep:;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)sourceAwemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
