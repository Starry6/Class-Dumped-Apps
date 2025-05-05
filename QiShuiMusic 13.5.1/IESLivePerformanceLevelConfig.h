@interface IESLivePerformanceLevelConfig : NSObject
@property (nonatomic) BOOL andor;
@property (nonatomic) NSArray conditions;
- (BOOL)andor;
- (void)setAndor:;
- (id)conditions;
- (void)setConditions:;
- (void).cxx_destruct;
+ (id)transformFromDictionary:;
@end
