@interface ICSTimeZoneChange : NSObject
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (double)interval;
- (id)initWithTimeInterval:tzOffsetTo:;
- (long long)tzOffsetTo;
- (BOOL)isCloseTo:;
@end
