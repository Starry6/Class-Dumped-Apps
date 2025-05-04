@interface AWESearchBarContainerBtnHotSpotConfig : NSObject
@property (nonatomic) BOOL enableAdjust;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double height;
@property (nonatomic) double width;
- (id)initWithDic:;
- (BOOL)enableAdjust;
- (void)setEnableAdjust:;
- (double)leftMargin;
- (void)setHeight:;
- (void)setWidth:;
- (void)setLeftMargin:;
- (double)width;
- (double)rightMargin;
- (double)height;
- (void)setRightMargin:;
@end
