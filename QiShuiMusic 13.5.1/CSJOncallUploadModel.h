@interface CSJOncallUploadModel : CSJBasicModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString upload_api;
@property (nonatomic) NSString alert_text;
@property (nonatomic) NSString filter_name;
@property (nonatomic) NSString filter_id;
- (void)setFilter_name:;
- (id)alert_text;
- (id)filter_id;
- (id)filter_name;
- (BOOL)modelCustomTransformFromDictionary:;
- (void)setAlert_text:;
- (void)setFilter_id:;
- (void)setUpload_api:;
- (BOOL)supportFilterWord;
- (id)upload_api;
- (BOOL)enable;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)modelCustomPropertyMapper;
@end
