@interface AWEProgressDecoratorDotInfoModel : NSObject
@property (nonatomic) double percentage;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) NSString descString;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL shouldShock;
- (BOOL)shouldShock;
- (void)setShouldShock:;
- (id)descString;
- (void)setDescString:;
- (double)timestamp;
- (double)leftMargin;
- (void)setLeftMargin:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)rightMargin;
- (void)setRightMargin:;
- (double)percentage;
- (void)setPercentage:;
@end
