@interface BDCTLocalization : NSObject
@property (nonatomic) NSString lang;
@property (nonatomic) NSDictionary dict;
- (id)getPreferredLanguage;
- (void)loadTipDict;
- (id)localString:;
- (void)setLanguage:;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
- (id)getLanguage;
- (id)lang;
- (void)setLang:;
+ (id)sharedInstance;
@end
