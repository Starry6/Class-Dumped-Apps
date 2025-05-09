@interface IESECInternalFlowPageStyleModel : MTLModel
@property (nonatomic) q shadow;
@property (nonatomic) q bgHighLight;
@property (nonatomic) q slideStyle;
@property (nonatomic) BOOL headerCartDisplay;
@property (nonatomic) q shouldShowMallEntrance;
@property (nonatomic) q immerseHeaderSearchDisplay;
@property (nonatomic) q commentStyle;
@property (nonatomic) q sameProductStyle;
@property (nonatomic) q sameProductSwitch;
@property (nonatomic) BOOL authorCommissionSwitch;
@property (nonatomic) q pageInternalFlowStyle;
@property (nonatomic) NSString headerText;
@property (nonatomic) NSString noProductText;
@property (nonatomic) NSString noMoreProductText;
@property (nonatomic) Q listStyle;
@property (nonatomic) q showCount;
@property (nonatomic) q searchShow;
@property (nonatomic) q searchShowPosition;
@property (nonatomic) q searchResourceStyle;
@property (nonatomic) q searchCardFrequency;
@property (nonatomic) q windowEntryPriority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBgHighLight:;
- (BOOL)authorCommissionSwitch;
- (long long)bgHighLight;
- (long long)commentStyle;
- (BOOL)headerCartDisplay;
- (long long)immerseHeaderSearchDisplay;
- (id)noMoreProductText;
- (id)noProductText;
- (long long)pageInternalFlowStyle;
- (long long)sameProductStyle;
- (long long)sameProductSwitch;
- (long long)searchCardFrequency;
- (long long)searchResourceStyle;
- (long long)searchShow;
- (long long)searchShowPosition;
- (void)setAuthorCommissionSwitch:;
- (void)setCommentStyle:;
- (void)setHeaderCartDisplay:;
- (void)setImmerseHeaderSearchDisplay:;
- (void)setNoMoreProductText:;
- (void)setNoProductText:;
- (void)setPageInternalFlowStyle:;
- (void)setSameProductStyle:;
- (void)setSameProductSwitch:;
- (void)setSearchCardFrequency:;
- (void)setSearchResourceStyle:;
- (void)setSearchShow:;
- (void)setSearchShowPosition:;
- (void)setShouldShowMallEntrance:;
- (void)setWindowEntryPriority:;
- (long long)shouldShowMallEntrance;
- (long long)windowEntryPriority;
- (id)headerText;
- (long long)shadow;
- (void).cxx_destruct;
- (void)setShadow:;
- (void)setHeaderText:;
- (long long)showCount;
- (void)setShowCount:;
- (unsigned long long)listStyle;
- (void)setListStyle:;
- (long long)slideStyle;
- (void)setSlideStyle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
