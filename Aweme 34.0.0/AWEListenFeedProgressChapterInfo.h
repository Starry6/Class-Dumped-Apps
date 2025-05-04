@interface AWEListenFeedProgressChapterInfo : NSObject
@property (nonatomic) double startPoint;
@property (nonatomic) double timestamp;
@property (nonatomic) NSString descString;
@property (nonatomic) UIView pointView;
- (id)pointView;
- (void)setPointView:;
- (id)descString;
- (void)setDescString:;
- (double)timestamp;
- (void)setStartPoint:;
- (double)startPoint;
- (void)setTimestamp:;
- (void).cxx_destruct;
@end
