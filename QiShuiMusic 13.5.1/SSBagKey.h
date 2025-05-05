@interface SSBagKey : NSObject
@property (nonatomic) <NSObject> defaultValue;
@property (nonatomic) NSArray stringRepresentation;
@property (nonatomic) Q valueType;
- (id)stringRepresentation;
- (id)defaultValue;
- (void).cxx_destruct;
- (unsigned long long)valueType;
- (id)initWithStringRepresentation:valueType:;
- (id)initWithStringRepresentation:valueType:defaultValue:;
- (id)valueFromDictionary:;
@end
