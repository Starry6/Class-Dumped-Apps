@interface AWEClassroomModel.ClassroomUserModel : MTLModel
@property (nonatomic) q epUid;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) NSString teacherProfileSchema;
- (id)avatarURL;
- (void)setAvatarURL:;
- (long long)epUid;
- (void)setEpUid:;
- (id)teacherProfileSchema;
- (void)setTeacherProfileSchema:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
