@interface WBSTranslationContextSnapshot : NSObject
@property (nonatomic) Q state;
@property (nonatomic) NSString targetLocale;
@property (nonatomic) NSString webpageLocale;
@property (nonatomic) NSURL webpageURL;
- (id)webpageURL;
- (void)setState:;
- (void)setWebpageURL:;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)targetLocale;
- (void)setTargetLocale:;
- (id)webpageLocale;
- (void)setWebpageLocale:;
@end
