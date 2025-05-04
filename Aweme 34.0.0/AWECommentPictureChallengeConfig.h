@interface AWECommentPictureChallengeConfig : AWEBaseApiModel
@property (nonatomic) NSString configID;
@property (nonatomic) NSString inputText;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subText;
@property (nonatomic) NSString buttonText;
@property (nonatomic) q index;
@property (nonatomic) NSString innerText;
@property (nonatomic) NSString innerPublishText;
- (id)innerPublishText;
- (id)subText;
- (void)setSubText:;
- (id)configID;
- (void)setConfigID:;
- (void)setInnerPublishText:;
- (void)setIndex:;
- (long long)index;
- (id)buttonText;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)innerText;
- (id)inputText;
- (void)setInputText:;
- (void)setButtonText:;
- (void)setInnerText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
