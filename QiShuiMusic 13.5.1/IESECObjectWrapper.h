@interface IESECObjectWrapper : NSObject
@property (nonatomic) @ object;
- (void)setObject:;
- (unsigned long long)hash;
- (id)initWithObject:;
- (void).cxx_destruct;
- (id)object;
+ (id)wrapperWithObject:;
@end
