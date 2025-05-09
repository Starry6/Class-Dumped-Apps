@interface AWELandscapeChapterPoint : NSObject
@property (nonatomic) UIView pointView;
@property (nonatomic) double offset;
@property (nonatomic) double timestamp;
@property (nonatomic) double leftSide;
@property (nonatomic) double leftSideTimestamp;
@property (nonatomic) double rightSide;
@property (nonatomic) double rightSideTimestamp;
@property (nonatomic) BOOL shouldShock;
@property (nonatomic) q type;
- (id)pointView;
- (void)setPointView:;
- (BOOL)shouldShock;
- (void)setShouldShock:;
- (double)rightSide;
- (double)leftSide;
- (void)setLeftSide:;
- (double)leftSideTimestamp;
- (void)setLeftSideTimestamp:;
- (void)setRightSide:;
- (double)rightSideTimestamp;
- (void)setRightSideTimestamp:;
- (double)timestamp;
- (void)setOffset:;
- (double)offset;
- (long long)type;
- (void)setTimestamp:;
- (void)setType:;
- (void).cxx_destruct;
@end
