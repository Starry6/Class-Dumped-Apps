@interface VSBindingInfo : NSObject
@property (nonatomic) NSValueTransformer valueTransformer;
@property (nonatomic) @ unsafeObservedObject;
@property (nonatomic) @ weakObservedObject;
@property (nonatomic) NSString keyPath;
@property (nonatomic) NSDictionary options;
@property (nonatomic) @ value;
- (void)setValueTransformer:;
- (id)init;
- (void)setValue:;
- (id)options;
- (id)keyPath;
- (void).cxx_destruct;
- (id)value;
- (id)valueTransformer;
- (id)initWithObservedObject:keyPath:options:;
- (void)requireExpectedConcurrency;
- (id)unsafeObservedObject;
- (id)weakObservedObject;
@end
