@interface AWERVQualityMonitorVideoInfo : NSObject
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString tagIds;
@property (nonatomic) NSString tagNames;
@property (nonatomic) double totalTime;
@property (nonatomic) AWERelatedVideoTagModel tagModel;
- (id)initWithAwemeModel:;
- (void)setTagModel:;
- (id)tagModel;
- (id)initWithItemId:tagIds:tagNames:tagModel:totalTime:;
- (id)tagNames;
- (double)totalTime;
- (void).cxx_destruct;
- (void)setTotalTime:;
- (void)setTagNames:;
- (id)itemId;
- (void)setTagIds:;
- (id)tagIds;
- (void)setItemId:;
@end
