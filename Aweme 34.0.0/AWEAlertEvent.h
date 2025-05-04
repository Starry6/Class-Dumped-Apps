@interface AWEAlertEvent : NSObject
@property (nonatomic) q eventEnum;
@property (nonatomic) NSString eventID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEventEnum:;
- (long long)eventEnum;
- (id)eventID;
+ (id)eventID;
+ (id)eventDescription;
@end
