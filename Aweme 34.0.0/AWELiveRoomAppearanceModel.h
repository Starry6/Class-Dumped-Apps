@interface AWELiveRoomAppearanceModel : AWEBaseApiModel
@property (nonatomic) q upRightStatsDisplayType;
@property (nonatomic) q previewStyle;
@property (nonatomic) NSArray contentTagsArray;
@property (nonatomic) NSString tagsForTrack;
@property (nonatomic) AWEURLModel blurPlaceHolderImg;
- (id)tagsForTrack;
- (id)contentTagsArray;
- (long long)upRightStatsDisplayType;
- (void)setUpRightStatsDisplayType:;
- (long long)previewStyle;
- (void)setPreviewStyle:;
- (void)setTagsForTrack:;
- (void)setContentTagsArray:;
- (void)setBlurPlaceHolderImg:;
- (id)blurPlaceHolderImg;
- (void).cxx_destruct;
+ (id)parseFromOriginRoomModel:;
@end
