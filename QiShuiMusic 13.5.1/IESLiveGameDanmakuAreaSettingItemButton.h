@interface IESLiveGameDanmakuAreaSettingItemButton : IESLiveButton
@property (nonatomic) q areaType;
- (id)init;
- (id)intrinsicContentSize;
- (id)titleRectForContentRect:;
- (id)initWithFrame:;
- (id)imageRectForContentRect:;
- (long long)areaType;
- (void)setAreaType:;
+ (id)configForItemType:;
+ (id)liveVSconfigForItemType:;
@end
