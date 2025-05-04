@interface AWEPOISimpleUserInfo : AWEBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel avatorThumb;
- (id)avatorThumb;
- (void)setAvatorThumb:;
- (void)setUid:;
- (id)uid;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
+ (id)JSONKeyPathsByPropertyKey;
@end
