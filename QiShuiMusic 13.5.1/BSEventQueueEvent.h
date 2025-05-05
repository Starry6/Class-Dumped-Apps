@interface BSEventQueueEvent : NSObject
@property (nonatomic) NSString name;
- (void)execute;
- (void).cxx_destruct;
- (id)description;
- (id)name;
+ (id)eventWithName:handler:;
@end
