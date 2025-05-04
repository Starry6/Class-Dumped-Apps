@interface AWEProgressChapterPoint : NSObject
@property (nonatomic) double offset;
@property (nonatomic) double timestamp;
@property (nonatomic) double leftSide;
@property (nonatomic) double rightSide;
@property (nonatomic) NSString descString;
@property (nonatomic) UIView pointView;
@property (nonatomic) BOOL shouldShock;
- (id)pointView;
- (void)setPointView:;
- (BOOL)shouldShock;
- (void)setShouldShock:;
- (id)descString;
- (void)setDescString:;
- (double)rightSide;
- (double)leftSide;
- (void)setLeftSide:;
- (void)setRightSide:;
- (double)timestamp;
- (void)setOffset:;
- (double)offset;
- (void)setTimestamp:;
- (void).cxx_destruct;
@end
