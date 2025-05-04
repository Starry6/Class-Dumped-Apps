@interface AWEIMThinkingContentComponent : AWEIMFlexComponent
@property (nonatomic) <AWEIMNativeDynamicContentInterface> contentService;
@property (nonatomic) NSDictionary contentDict;
@property (nonatomic) Q index;
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)contentDict;
- (void)setContentDict:;
- (void)p_updateProps;
- (BOOL)enableDisplay;
- (void)didUpdateContent;
- (BOOL)shouldSelfLayout;
- (id)contentService;
- (void)setContentService:;
- (unsigned long long)p_thinkingStatusWithStreamStatus:;
- (id)p_titleWithStatus:;
- (void)p_didTapTitle;
- (void)setIndex:;
- (unsigned long long)index;
- (id)attributes;
- (void)setAttributes:;
- (void).cxx_destruct;
@end
