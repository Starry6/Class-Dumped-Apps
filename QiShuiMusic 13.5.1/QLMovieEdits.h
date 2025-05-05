@interface QLMovieEdits : NSObject
@property (nonatomic) Q rightRotationsCount;
@property (nonatomic) double trimStartTime;
@property (nonatomic) double trimEndTime;
- (id)init;
- (BOOL)isEqual:;
- (BOOL)rotated;
- (void)setTrimStartTime:;
- (void)setTrimEndTime:;
- (double)trimStartTime;
- (double)trimEndTime;
- (BOOL)trimmed;
- (BOOL)hasEdits;
- (void)incrementRightRotationsCount;
- (void)resetTrimmingValues;
- (void)resetEditingValues;
- (unsigned long long)rightRotationsCount;
- (void)setRightRotationsCount:;
+ (id)editsWithRightRotationsCount:trimStartTime:trimEndTime:;
@end
