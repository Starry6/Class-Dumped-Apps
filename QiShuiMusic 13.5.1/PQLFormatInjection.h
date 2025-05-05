@interface PQLFormatInjection : PQLNameInjectionBase
@property (nonatomic) NSData sql;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)bindWithStatement:startingAtIndex:;
- (id)bindValuesToKeepAlive;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFormat:arguments:;
+ (id)formatInjection:;
@end
