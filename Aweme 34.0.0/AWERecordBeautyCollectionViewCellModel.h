@interface AWERecordBeautyCollectionViewCellModel : NSObject
@property (nonatomic) NSString nodeId;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL applied;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray iconURLs;
@property (nonatomic) NSString iconImageName;
- (BOOL)isApplied;
- (void)setApplied:;
- (void)setIconImageName:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setSelected:;
- (id)iconImageName;
- (id)iconURLs;
- (void)setIconURLs:;
- (id)nodeId;
- (void)setNodeId:;
@end
