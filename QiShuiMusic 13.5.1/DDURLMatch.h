@interface DDURLMatch : NSObject
- (id)url;
- (void)dealloc;
- (id)range;
- (long long)compare:;
- (id)description;
- (id)initWithRange:url:;
@end
