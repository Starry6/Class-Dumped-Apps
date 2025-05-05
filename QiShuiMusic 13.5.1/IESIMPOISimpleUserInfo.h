@interface IESIMPOISimpleUserInfo : IESIMBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString nickName;
@property (nonatomic) IESIMURLModel avatorThumb;
- (void)setAvatorThumb:;
- (id)avatorThumb;
- (id)uid;
- (void)setUid:;
- (id)nickName;
- (void).cxx_destruct;
- (void)setNickName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
