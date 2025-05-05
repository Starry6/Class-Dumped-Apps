@interface IPASloMoOperation : IPAVideoOperation
@property (nonatomic) float rate;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
- (id)initWithOperation:;
- (id)timeRange;
- (float)rate;
- (id)identifier;
- (id)debugDescription;
- (id)internalRepresentation;
- (id)settingsDictionary;
- (id)copyWithZone:;
- (id)initWithSettingsDictionary:;
- (BOOL)isEqualToOperation:;
- (BOOL)isMigratable;
- (id)initWithTimeRange:rate:;
+ (id)operationFromFileURL:;
@end
