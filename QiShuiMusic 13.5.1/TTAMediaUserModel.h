@interface TTAMediaUserModel : TTADataRespModel
@property (nonatomic) NSNumber media_id;
@property (nonatomic) NSString name;
@property (nonatomic) NSString avatar_url;
@property (nonatomic) NSNumber user_verified;
@property (nonatomic) NSNumber display_app_ocr_entrance;
- (id)avatar_url;
- (id)display_app_ocr_entrance;
- (id)media_id;
- (void)setAvatar_url:;
- (void)setDisplay_app_ocr_entrance:;
- (void)setMedia_id:;
- (void)setUser_verified:;
- (id)user_verified;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
+ (id)tta_modelCustomPropertyMapper;
@end
