@interface AWELeftSideBarPlayletCellDataModel : AWELeftSideBarVideoCellDataModel
@property (nonatomic) AWELeftSideBarPlayletCellTopLeftLabelDataModel topLeftLabel;
- (id)topLeftLabel;
- (void)setTopLeftLabel:;
- (id)description;
- (void).cxx_destruct;
+ (id)topLeftLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
