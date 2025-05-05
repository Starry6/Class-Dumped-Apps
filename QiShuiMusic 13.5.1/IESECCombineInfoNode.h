@interface IESECCombineInfoNode : NSObject
@property (nonatomic) IESECCombineInfoNode next;
- (id)processData:flag:;
- (id)next;
- (void)setNext:;
- (id)map:;
- (BOOL)distinct:;
- (void).cxx_destruct;
- (BOOL)skip;
- (id)initWithType:data:;
- (BOOL)ignore:;
- (BOOL)filter:;
@end
