@interface ABUToastViewConfig : NSObject
@property (nonatomic) double landscapeOffset;
@property (nonatomic) Q position;
@property (nonatomic) double offset;
@property (nonatomic) {UIEdgeInsets=dddd} padding;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) double hideDelay;
@property (nonatomic) BOOL roundedCorner;
- (double)landscapeOffset;
- (double)hideDelay;
- (void)setHideDelay:;
- (void)setLandscapeOffset:;
- (void)setOffset:forOrientation:;
- (void)setPosition:;
- (unsigned long long)position;
- (void)setOffset:;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (double)offset;
- (void)setPadding:;
- (void)setTextColor:;
- (void).cxx_destruct;
- (id)textColor;
- (id)padding;
- (void)setRoundedCorner:;
- (BOOL)roundedCorner;
@end
