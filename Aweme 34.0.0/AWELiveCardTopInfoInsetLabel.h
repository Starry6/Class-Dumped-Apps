@interface AWELiveCardTopInfoInsetLabel : UILabel
@property (nonatomic) double insetX;
@property (nonatomic) double insetY;
- (void)setInsetX:;
- (void)setInsetY:;
- (double)insetX;
- (double)insetY;
- (id)init;
- (id)intrinsicContentSize;
@end
