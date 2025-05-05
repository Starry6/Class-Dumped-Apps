@interface VMUFieldValue : NSObject
@property (nonatomic) VMUFieldInfo field;
@property (nonatomic) Q value;
- (id)field;
- (void).cxx_destruct;
- (unsigned long long)value;
- (id)initWithField:value:;
@end
