@interface AWEProtectedNicknameModel : AWEBaseApiModel
@property (nonatomic) BOOL hasRight;
@property (nonatomic) NSString protectNickname;
@property (nonatomic) Q reviewStatus;
@property (nonatomic) NSString protectNickNamePageDescription;
- (void)setReviewStatus:;
- (unsigned long long)reviewStatus;
- (void)setHasRight:;
- (id)protectNickname;
- (void)setProtectNickname:;
- (id)protectNickNamePageDescription;
- (void)setProtectNickNamePageDescription:;
- (void).cxx_destruct;
- (BOOL)hasRight;
+ (id)JSONKeyPathsByPropertyKey;
@end
