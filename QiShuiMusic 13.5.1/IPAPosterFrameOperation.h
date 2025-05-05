@interface IPAPosterFrameOperation : IPAVideoOperation
@property (nonatomic) {?=qiIq} frameTime;
- (id)initWithOperation:;
- (id)identifier;
- (id)debugDescription;
- (id)settingsDictionary;
- (id)frameTime;
- (id)initWithSettingsDictionary:;
- (BOOL)isEqualToOperation:;
- (BOOL)isMigratable;
- (id)initWithFrameTime:;
@end
