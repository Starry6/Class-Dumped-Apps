@interface BDParam : NSObject
@property (nonatomic) BOOL isSet;
@property (nonatomic) @ value;
- (id)__initWithValue:isSet:;
- (id)stringToValue:;
- (id)valueToString;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isSet;
+ (id)paramWithValue:;
+ (id)paramWithData:key:defaultValue:;
+ (BOOL)accessInstanceVariablesDirectly;
@end
