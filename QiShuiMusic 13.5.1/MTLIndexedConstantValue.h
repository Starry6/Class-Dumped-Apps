@interface MTLIndexedConstantValue : NSObject
@property (nonatomic) Q index;
@property (nonatomic) Q dataType;
@property (nonatomic) ^v data;
- (void)dealloc;
- (id)formattedDescription:;
- (id)data;
- (unsigned long long)dataType;
- (unsigned long long)index;
- (id)description;
- (id)describe;
- (id)initWithValue:type:index:;
@end
