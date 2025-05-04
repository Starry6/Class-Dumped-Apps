@interface AWEPublishImageAlbumLargePreviewViewConfig : NSObject
@property (nonatomic) NSString cellIdentifier;
@property (nonatomic) # cellClass;
@property (nonatomic) {CGSize=dd} itemSize;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) Q type;
@property (nonatomic) BOOL disableLongAndPanGesture;
- (void)setCellIdentifier:;
- (void)setDisableLongAndPanGesture:;
- (BOOL)disableLongAndPanGesture;
- (double)leftMargin;
- (void)setLeftMargin:;
- (unsigned long long)type;
- (Class)cellClass;
- (void)setType:;
- (void).cxx_destruct;
- (double)rightMargin;
- (void)setRightMargin:;
- (id)itemSize;
- (void)setItemSize:;
- (id)cellIdentifier;
- (void)setCellClass:;
@end
