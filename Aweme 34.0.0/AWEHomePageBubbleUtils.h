@interface AWEHomePageBubbleUtils : NSObject
@property (nonatomic) double maxBubbleLabelWidth;
@property (nonatomic) AWEHomePageBubbleConfig bubbleConfig;
- (double)maxBubbleLabelWidth;
- (id)bubbleConfig;
- (id)getDefaultPlaceHolderWithSize:radius:;
- (void)setBubbleConfig:;
- (void)setMaxBubbleLabelWidth:;
- (id)init;
- (void).cxx_destruct;
- (void)setupConfig;
+ (BOOL)isLimit115;
+ (double)getAdaptFloatContent:contentLength:;
+ (double)getAdaptFloat:;
+ (id)getAdaptFontWithDUXfontClass:DUXFontWeight:;
+ (id)sharedInstance;
@end
