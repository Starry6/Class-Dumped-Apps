@interface IESECLiveTransitionInfo : NSObject
@property (nonatomic) Q actionType;
@property (nonatomic) Q state;
@property (nonatomic) double maxPosition;
@property (nonatomic) {CGPoint=dd} translation;
@property (nonatomic) double percent;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL isClickActionType;
- (void)setMaxPosition:;
- (BOOL)isClickActionType;
- (void)setAnimated:;
- (BOOL)animated;
- (unsigned long long)actionType;
- (void)setActionType:;
- (void)setState:;
- (unsigned long long)state;
- (id)translation;
- (void)setTranslation:;
- (double)percent;
- (void)setPercent:;
- (double)maxPosition;
@end
