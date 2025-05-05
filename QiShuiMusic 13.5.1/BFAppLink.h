@interface BFAppLink : NSObject
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) NSArray targets;
@property (nonatomic) NSURL webURL;
@property (nonatomic) BOOL backToReferrer;
- (id)initWithIsBackToReferrer:;
- (BOOL)isBackToReferrer;
- (void)setBackToReferrer:;
- (id)targets;
- (void)setSourceURL:;
- (id)sourceURL;
- (void)setTargets:;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:;
+ (id)appLinkWithSourceURL:targets:webURL:;
+ (id)appLinkWithSourceURL:targets:webURL:isBackToReferrer:;
@end
