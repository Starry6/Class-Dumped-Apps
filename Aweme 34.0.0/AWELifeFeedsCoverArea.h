@interface AWELifeFeedsCoverArea : AWEBaseApiModel
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) AWELifeFeedsCoverTopInfo coverTopInfo;
@property (nonatomic) AWELifeFeedsCoverBottomInfo coverBottomInfo;
- (id)cover;
- (void)setCover:;
- (id)coverTopInfo;
- (id)coverBottomInfo;
- (void)setCoverTopInfo:;
- (void)setCoverBottomInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
