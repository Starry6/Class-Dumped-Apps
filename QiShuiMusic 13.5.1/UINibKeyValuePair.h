@interface UINibKeyValuePair : NSObject
@property (nonatomic) @ object;
@property (nonatomic) NSString keyPath;
@property (nonatomic) @ value;
- (id)initWithCoder:;
- (void)apply;
- (void)encodeWithCoder:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)object;
- (id)value;
- (void)applyForSimulator;
- (id)initWithObject:keyPath:value:;
@end
