@interface AWETeenQualitySection : NSObject
@property (nonatomic) NSString sectionName;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isStartSection;
@property (nonatomic) double duration;
- (BOOL)isStartSection;
- (void)setIsStartSection:;
- (void)setStartTime:;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (double)startTime;
- (void)setSectionName:;
- (id)sectionName;
@end
