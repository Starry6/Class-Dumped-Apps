@interface MKTransitInfoPreloader : NSObject
- (void).cxx_destruct;
- (id)initWithTransitLabels:;
- (void)preloadWithCompletion:;
+ (id)attributedTextFromPreload:view:;
+ (id)separatorImageWithLineHeight:;
@end
