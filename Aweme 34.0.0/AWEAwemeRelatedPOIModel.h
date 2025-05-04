@interface AWEAwemeRelatedPOIModel : AWEAwemeResponseModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString tipsWord;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString trackInfo;
@property (nonatomic) BOOL priorityHighSuggestWord;
- (id)tipsWord;
- (void)setTipsWord:;
- (BOOL)priorityHighSuggestWord;
- (void)setPriorityHighSuggestWord:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setTrackInfo:;
- (id)trackInfo;
+ (id)JSONKeyPathsByPropertyKey;
@end
