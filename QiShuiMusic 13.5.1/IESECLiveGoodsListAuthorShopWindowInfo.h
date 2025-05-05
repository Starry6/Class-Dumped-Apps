@interface IESECLiveGoodsListAuthorShopWindowInfo : MTLModel
@property (nonatomic) NSString shopWindowEntrance;
@property (nonatomic) NSString shopWindowJumpURL;
@property (nonatomic) NSString suffixEntranceText;
@property (nonatomic) NSNumber fontSize;
@property (nonatomic) IESECLiveGoodsListAuthorShopAvatarModel windowAvatar;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTrackParams:;
- (void)setShopWindowEntrance:;
- (void)setShopWindowJumpURL:;
- (void)setSuffixEntranceText:;
- (void)setWindowAvatar:;
- (id)shopWindowEntrance;
- (id)shopWindowJumpURL;
- (id)suffixEntranceText;
- (id)trackParams;
- (id)windowAvatar;
- (id)fontSize;
- (void).cxx_destruct;
- (void)setFontSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
