@interface PQLNameInjectionBase : NSData
@property (nonatomic) NSData sql;
- (id)initWithBytes:length:;
- (void)dealloc;
- (id)bytes;
- (id)sql;
- (id)initWithData:;
- (unsigned long long)length;
@end
