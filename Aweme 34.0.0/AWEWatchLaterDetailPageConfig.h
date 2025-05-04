@interface AWEWatchLaterDetailPageConfig : NSObject
@property (nonatomic) BOOL showRecommend;
@property (nonatomic) Q cellStyle;
@property (nonatomic) Q rightElement;
@property (nonatomic) Q titlePosition;
@property (nonatomic) Q bottomInteractionType;
@property (nonatomic) double pageWidth;
@property (nonatomic) Q watchLaterPageStyle;
- (BOOL)showRecommend;
- (unsigned long long)watchLaterPageStyle;
- (void)setShowRecommend:;
- (unsigned long long)rightElement;
- (void)setRightElement:;
- (unsigned long long)bottomInteractionType;
- (void)setBottomInteractionType:;
- (void)setWatchLaterPageStyle:;
- (unsigned long long)cellStyle;
- (void)setCellStyle:;
- (double)pageWidth;
- (void)setPageWidth:;
- (void)setTitlePosition:;
- (unsigned long long)titlePosition;
@end
