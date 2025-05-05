@interface KeyWithValueType : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) Q valueType;
- (id)initWithKey:valueType:;
- (void)setValueType:;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
- (unsigned long long)valueType;
@end
