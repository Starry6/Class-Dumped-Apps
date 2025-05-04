@interface AWEVSFormatTabCellModel : NSObject
@property (nonatomic) Q cellType;
@property (nonatomic) NSString seasonID;
@property (nonatomic) NSString seasonTag;
@property (nonatomic) double height;
@property (nonatomic) AWEVSFormatTabListModel videoModel;
@property (nonatomic) AWEVSFormatTabStreamingModel streamModel;
- (id)videoModel;
- (void)setVideoModel:;
- (void)setSeasonID:;
- (id)seasonID;
- (void)setSeasonTag:;
- (id)seasonTag;
- (id)streamModel;
- (void)setStreamModel:;
- (unsigned long long)cellType;
- (void)setHeight:;
- (void)setCellType:;
- (void).cxx_destruct;
- (double)height;
@end
