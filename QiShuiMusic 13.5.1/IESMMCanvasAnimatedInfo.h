@interface IESMMCanvasAnimatedInfo : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString animJsonParam;
@property (nonatomic) BOOL useNewAnim;
@property (nonatomic) NSString animInPath;
@property (nonatomic) double inStartTime;
@property (nonatomic) double inEndTime;
@property (nonatomic) NSString animOutPath;
@property (nonatomic) double outStartTime;
@property (nonatomic) double outEndTime;
@property (nonatomic) NSString animComboPath;
@property (nonatomic) double comboStartTime;
@property (nonatomic) double comboEndTime;
- (void)setInStartTime:;
- (void)setAnimOutPath:;
- (id)animComboPath;
- (id)animInPath;
- (id)animJsonParam;
- (id)animOutPath;
- (double)comboEndTime;
- (double)comboStartTime;
- (double)inEndTime;
- (double)inStartTime;
- (double)outEndTime;
- (double)outStartTime;
- (void)setAnimComboPath:;
- (void)setAnimInPath:;
- (void)setAnimJsonParam:;
- (void)setComboEndTime:;
- (void)setComboStartTime:;
- (void)setInEndTime:;
- (void)setOutEndTime:;
- (void)setOutStartTime:;
- (void)setUseNewAnim:;
- (BOOL)useNewAnim;
- (id)path;
- (void)setPath:;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (id)initWithDict:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)copyWithZone:;
- (id)toDict;
@end
