@interface AWESearchHarmfulCategoryManager : NSObject
@property (nonatomic) BOOL isHarmfulSpeech;
@property (nonatomic) NSString fullString;
@property (nonatomic) NSString linkString;
@property (nonatomic) NSString linkURL;
- (void)setFullString:;
- (id)linkString;
- (void)setLinkString:;
- (BOOL)checkHarmfulCategory:nilTextModel:;
- (BOOL)isHarmfulSpeech;
- (void)setIsHarmfulSpeech:;
- (void).cxx_destruct;
- (id)fullString;
- (id)linkURL;
- (void)setLinkURL:;
@end
