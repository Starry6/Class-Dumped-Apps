@interface CalLocationAuthorizationStatus : NSObject
@property (nonatomic) NSInteger status;
@property (nonatomic) Q precision;
- (id)initWithStatus:precision:;
- (unsigned long long)precision;
- (int)status;
@end
