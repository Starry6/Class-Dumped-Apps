@interface AWEFeedMultiTabSegmentedViewUIConfig : NSObject
@property (nonatomic) double selectLineHeight;
@property (nonatomic) double maskLayerWidth;
@property (nonatomic) AWEHPTopTabItemViewUIConfig itemViewUIConfig;
@property (nonatomic) AWEHPTopTabRedDotUIConfig redDotUIConfig;
- (double)maskLayerWidth;
- (double)selectLineHeight;
- (void)setSelectLineHeight:;
- (void)setMaskLayerWidth:;
- (id)itemViewUIConfig;
- (void)setItemViewUIConfig:;
- (id)redDotUIConfig;
- (void)setRedDotUIConfig:;
- (void).cxx_destruct;
@end
