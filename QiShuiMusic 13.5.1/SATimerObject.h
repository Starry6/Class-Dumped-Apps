@interface SATimerObject : SADomainObject
@property (nonatomic) SADataSourceInfo dataSourceInfo;
@property (nonatomic) NSNumber isFiring;
@property (nonatomic) NSString state;
@property (nonatomic) NSNumber timerValue;
@property (nonatomic) NSString title;
@property (nonatomic) NSString type;
- (id)isFiring;
- (id)groupIdentifier;
- (void)setState:;
- (void)setType:;
- (void)setTitle:;
- (id)timerValue;
- (void)setIsFiring:;
- (id)type;
- (id)title;
- (id)state;
- (id)encodedClassName;
- (id)dataSourceInfo;
- (void)setDataSourceInfo:;
- (void)setTimerValue:;
+ (id)object;
+ (id)objectWithDictionary:context:;
@end
