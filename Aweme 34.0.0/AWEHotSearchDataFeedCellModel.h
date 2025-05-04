@interface AWEHotSearchDataFeedCellModel : AWEBaseApiModel
@property (nonatomic) NSArray wordList;
@property (nonatomic) AWEShareModel shareInfo;
@property (nonatomic) NSString activeTime;
@property (nonatomic) NSString schema;
- (id)wordList;
- (void)setWordList:;
- (id)schema;
- (void)setSchema:;
- (id)shareInfo;
- (void).cxx_destruct;
- (void)setShareInfo:;
- (id)activeTime;
- (void)setActiveTime:;
+ (id)shareInfoJSONTransformer;
+ (id)wordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
