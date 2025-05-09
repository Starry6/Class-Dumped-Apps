@interface AWECommerceSwiftImpl.FullPageFeedAdLearnMoreItemModel : NSObject
@property (nonatomic) NSString cardIconUrl;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString cardTitle;
@property (nonatomic) NSArray attachText;
@property (nonatomic) BOOL canStartLoopPlayAttachText;
@property (nonatomic) q loopPlayFrequency;
@property (nonatomic) Q positionType;
@property (nonatomic) BOOL ctaType;
@property (nonatomic) BOOL tagType;
@property (nonatomic) @? containerBlock;
@property (nonatomic) UIFont textFont;
@property (nonatomic) UIColor textColor;
@property (nonatomic) BOOL isMarqueeType;
- (id)cardIconUrl;
- (void)setCardIconUrl:;
- (id)attachText;
- (void)setAttachText:;
- (BOOL)canStartLoopPlayAttachText;
- (void)setCanStartLoopPlayAttachText:;
- (long long)loopPlayFrequency;
- (void)setLoopPlayFrequency:;
- (void)setPositionType:;
- (BOOL)ctaType;
- (void)setCtaType:;
- (id)containerBlock;
- (void)setContainerBlock:;
- (BOOL)isMarqueeType;
- (void)setIsMarqueeType:;
- (BOOL)canLoopPlayAttachText;
- (BOOL)tagType;
- (id)init;
- (id)textFont;
- (void)setTextColor:;
- (id)buttonText;
- (void).cxx_destruct;
- (id)textColor;
- (id)cardTitle;
- (void)setButtonText:;
- (void)setCardTitle:;
- (void)setTextFont:;
- (unsigned long long)positionType;
- (void)setTagType:;
@end
