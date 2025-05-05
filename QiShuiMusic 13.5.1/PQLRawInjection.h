@interface PQLRawInjection : PQLNameInjectionBase
@property (nonatomic) NSData sql;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)bindWithStatement:startingAtIndex:;
- (id)initWithUTF8String:length:;
- (id)description;
+ (id)rawInjection:length:;
@end
