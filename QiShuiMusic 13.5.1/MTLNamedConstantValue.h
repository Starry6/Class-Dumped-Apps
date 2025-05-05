@interface MTLNamedConstantValue : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q dataType;
@property (nonatomic) ^v data;
- (void)dealloc;
- (id)formattedDescription:;
- (id)data;
- (unsigned long long)dataType;
- (id)description;
- (id)name;
- (id)initWithValue:type:name:;
- (id)describe;
@end
