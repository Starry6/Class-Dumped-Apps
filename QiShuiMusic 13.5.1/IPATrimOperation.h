@interface IPATrimOperation : IPAVideoOperation
@property (nonatomic) {?=qiIq} startTime;
@property (nonatomic) {?=qiIq} endTime;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} trimRange;
- (id)initWithOperation:;
- (id)identifier;
- (id)startTime;
- (id)debugDescription;
- (id)endTime;
- (id)settingsDictionary;
- (id)initWithStartTime:endTime:;
- (id)trimRange;
- (id)initWithSettingsDictionary:;
- (BOOL)isEqualToOperation:;
- (id)initWithTrimRange:;
- (id)trimRangeDictionary;
@end
