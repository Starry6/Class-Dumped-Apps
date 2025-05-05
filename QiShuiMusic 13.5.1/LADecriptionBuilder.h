@interface LADecriptionBuilder : NSObject
- (id)build;
- (id)initWithObject:;
- (void)appendObject:withName:;
- (void).cxx_destruct;
- (void)appendString:withName:;
- (void)appendInteger:withName:;
- (void)appendBool:withName:;
@end
