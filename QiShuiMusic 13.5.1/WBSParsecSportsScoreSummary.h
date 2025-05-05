@interface WBSParsecSportsScoreSummary : WBSParsecModel
@property (nonatomic) NSArray images;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSArray scores;
- (id)initWithDictionary:;
- (id)images;
- (id)scores;
- (void).cxx_destruct;
- (id)subtitle;
+ (id)schema;
@end
