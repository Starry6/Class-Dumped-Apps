@interface NSSetChange : NSObject
@property (nonatomic) Q changeType;
@property (nonatomic) @ value;
- (unsigned long long)changeType;
- (id)value;
- (id)initWithType:object:;
+ (id)allocWithZone:;
@end
