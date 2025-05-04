@interface AWEECAITransformerPreference : NSObject
@property (nonatomic) @? exposureBlock;
@property (nonatomic) NSAttributedString searchIconAttributedStr;
@property (nonatomic) @? clickSearchWordActionBlock;
@property (nonatomic) @? clickLinkActionBlock;
@property (nonatomic) @? retryBlock;
@property (nonatomic) NSAttributedString loadingAttributedString;
- (id)exposureBlock;
- (void)setExposureBlock:;
- (id)loadingAttributedString;
- (void)setLoadingAttributedString:;
- (id)searchIconAttributedStr;
- (void)setSearchIconAttributedStr:;
- (id)clickSearchWordActionBlock;
- (void)setClickSearchWordActionBlock:;
- (id)clickLinkActionBlock;
- (void)setClickLinkActionBlock:;
- (void).cxx_destruct;
- (id)retryBlock;
- (void)setRetryBlock:;
+ (id)defaultParagraphStyle;
@end
