@interface AWEModernFeedCellBackgroundModel : NSObject
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL isInRectangleBackground;
@property (nonatomic) Q cardCornerType;
@property (nonatomic) BOOL isWaterfallLayout;
@property (nonatomic) Q qualityStyleCornerType;
@property (nonatomic) UIColor backgroundColorLight;
@property (nonatomic) UIColor backgroundColorDark;
- (void)setIsInBackground:;
- (BOOL)isInRectangleBackground;
- (void)setIsInRectangleBackground:;
- (BOOL)isWaterfallLayout;
- (void)setIsWaterfallLayout:;
- (unsigned long long)qualityStyleCornerType;
- (void)setQualityStyleCornerType:;
- (unsigned long long)cardCornerType;
- (void)setCardCornerType:;
- (id)backgroundColorLight;
- (id)backgroundColorDark;
- (void)setBackgroundColorDark:;
- (void)setBackgroundColorLight:;
- (void).cxx_destruct;
- (BOOL)isInBackground;
@end
