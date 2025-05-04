@interface AWESearchCachalotHarmfulModel : NSObject
@property (nonatomic) BOOL isHarmfulSpeech;
@property (nonatomic) NSString fullString;
@property (nonatomic) NSString linkString;
@property (nonatomic) NSString linkURL;
- (void)setFullString:;
- (id)linkString;
- (void)setLinkString:;
- (BOOL)isHarmfulSpeech;
- (void)setIsHarmfulSpeech:;
- (void).cxx_destruct;
- (id)fullString;
- (id)linkURL;
- (void)setLinkURL:;
+ (id)modelWithNilInfo:nilText:;
@end
