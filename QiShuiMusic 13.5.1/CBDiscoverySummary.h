@interface CBDiscoverySummary : NSObject
@property (nonatomic) double scanTime;
- (void)encodeWithXPCObject:;
- (id)descriptionWithLevel:;
- (id)initWithXPCObject:error:;
- (id)description;
- (double)scanTime;
- (void)setScanTime:;
@end
