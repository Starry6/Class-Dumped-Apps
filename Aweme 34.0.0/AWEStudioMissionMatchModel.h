@interface AWEStudioMissionMatchModel : NSObject
@property (nonatomic) NSString titleContent;
@property (nonatomic) NSString subtitleContent;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString localIconName;
@property (nonatomic) Q sortType;
@property (nonatomic) AWENewPublishTableCell cell;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setLocalIconName:;
- (id)localIconName;
- (id)subtitleContent;
- (void)setSubtitleContent:;
- (id)titleContent;
- (void).cxx_destruct;
- (void)setTitleContent:;
- (id)cell;
- (void)setCell:;
- (void)setSortType:;
- (unsigned long long)sortType;
@end
