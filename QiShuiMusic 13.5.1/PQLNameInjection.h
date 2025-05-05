@interface PQLNameInjection : PQLNameInjectionBase
@property (nonatomic) NSData sql;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)bindWithStatement:startingAtIndex:;
- (id)initWithString:;
- (id)description;
- (id)nameByAddingSuffix:;
+ (id)nameWithString:;
+ (id)nameWithPrefix:suffix:;
+ (id)_appendString:toInjection:;
@end
