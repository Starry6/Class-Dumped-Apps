@interface AWEHotSpotBottomPostConfig : AWEBaseApiModel
@property (nonatomic) q buttonBGType;
@property (nonatomic) NSString buttonText;
@property (nonatomic) q insertPos;
@property (nonatomic) BOOL isShow;
- (BOOL)isShow;
- (void)setIsShow:;
- (long long)buttonBGType;
- (void)setButtonBGType:;
- (void)setInsertPos:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
- (long long)insertPos;
+ (id)JSONKeyPathsByPropertyKey;
@end
