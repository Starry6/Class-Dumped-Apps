@interface OSAStreamDeflater : NSObject
@property (nonatomic) BOOL capViolation;
- (id)init;
- (void)dealloc;
- (id)copyDeflatedDataFromStream:withCap:;
- (BOOL)capViolation;
- (void)setCapViolation:;
@end
