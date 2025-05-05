@interface EFXPCAlarmEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDate fireDate;
@property (nonatomic) BOOL isUserVisible;
- (unsigned long long)hash;
- (BOOL)isUserVisible;
- (id)initWithName:fireDate:isUserVisible:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)fireDate;
- (BOOL)isEqual:;
+ (id)_eventWithName:;
@end
