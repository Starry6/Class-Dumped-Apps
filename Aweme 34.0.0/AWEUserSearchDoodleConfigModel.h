@interface AWEUserSearchDoodleConfigModel : MTLModel
@property (nonatomic) BOOL shouldRedirect;
@property (nonatomic) NSString hintText;
@property (nonatomic) NSString keyword;
@property (nonatomic) BOOL shouldShowRecommend;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowRecommend;
- (id)hintText;
- (BOOL)shouldRedirect;
- (void)setShouldRedirect:;
- (void)setShouldShowRecommend:;
- (void).cxx_destruct;
- (id)keyword;
- (void)setKeyword:;
- (void)setHintText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
