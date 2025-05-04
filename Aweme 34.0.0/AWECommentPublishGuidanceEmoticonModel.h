@interface AWECommentPublishGuidanceEmoticonModel : AWEBaseApiModel
@property (nonatomic) AWECommentMiniEmoticonModel emoticonModel;
@property (nonatomic) NSString mainTitleString;
@property (nonatomic) NSString emoticonString;
@property (nonatomic) q emoticonNum;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) q index;
@property (nonatomic) BOOL onlyText;
@property (nonatomic) q recommendType;
- (void)setMainTitleString:;
- (long long)recommendType;
- (id)emoticonModel;
- (id)emoticonString;
- (void)setOnlyText:;
- (void)setEmoticonString:;
- (void)setEmoticonModel:;
- (void)setEmoticonNum:;
- (BOOL)onlyText;
- (id)mainTitleString;
- (long long)emoticonNum;
- (void)setIndex:;
- (long long)index;
- (void)setContentSize:;
- (id)contentSize;
- (void).cxx_destruct;
@end
