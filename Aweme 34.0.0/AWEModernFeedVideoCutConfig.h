@interface AWEModernFeedVideoCutConfig : NSObject
@property (nonatomic) double maxHeight;
@property (nonatomic) double judgeRatio;
@property (nonatomic) double displayRatio;
@property (nonatomic) double verticalVideoMaxWidth;
@property (nonatomic) double horizontalVideoMaxWidth;
@property (nonatomic) Q videoCutType;
- (unsigned long long)videoCutType;
- (void)setVideoCutType:;
- (double)judgeRatio;
- (void)setJudgeRatio:;
- (double)displayRatio;
- (void)setDisplayRatio:;
- (double)verticalVideoMaxWidth;
- (void)setVerticalVideoMaxWidth:;
- (double)horizontalVideoMaxWidth;
- (void)setHorizontalVideoMaxWidth:;
- (id)init;
- (void)setMaxHeight:;
- (double)maxHeight;
@end
