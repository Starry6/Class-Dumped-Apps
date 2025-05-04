@interface AWEPOIPhotoUploaderInfoModel : MTLModel
@property (nonatomic) NSString uploaderName;
@property (nonatomic) Q type;
@property (nonatomic) AWEURLModel avatarThumb;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarThumb;
- (id)secUid;
- (void)setAvatarThumb:;
- (void)setSecUid:;
- (id)uploaderName;
- (void)setUploaderName:;
- (void)setUid:;
- (id)uid;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (BOOL)automaticallyDefaultMapping;
@end
