@interface AWESearchHotSpotRelatedVSProgramUserModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString nickname;
@property (nonatomic) AWEURLModel avatarThumb;
@property (nonatomic) NSNumber certType;
@property (nonatomic) NSString certLabel;
@property (nonatomic) NSString arrowLabel;
@property (nonatomic) NSString linkTo;
- (id)secUserID;
- (void)setSecUserID:;
- (id)avatarThumb;
- (void)setAvatarThumb:;
- (id)certLabel;
- (void)setCertLabel:;
- (id)linkTo;
- (void)setLinkTo:;
- (id)nickname;
- (id)userID;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setNickname:;
- (void)setUserID:;
- (id)arrowLabel;
- (void)setArrowLabel:;
- (id)certType;
- (void)setCertType:;
+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
