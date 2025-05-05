@interface IESECFeedResourceCardHeaderModel : IESECFeedResourceCardBaseNode
@property (nonatomic) q headerHeight;
@property (nonatomic) Q style;
@property (nonatomic) IESECFeedResourceCardHeaderTitleInfoModel title;
@property (nonatomic) IESECFeedResourceCardHeaderTitleInfoModel subtitle;
@property (nonatomic) IESECFeedResourceCardHeaderLinkInfoModel link;
- (id)link;
- (void)setLink:;
- (void)setStyle:;
- (long long)headerHeight;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
- (unsigned long long)style;
- (void)setHeaderHeight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
