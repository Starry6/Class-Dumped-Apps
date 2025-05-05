@interface CNObjCMethod : NSObject
@property (nonatomic) : selector;
@property (nonatomic) NSString name;
@property (nonatomic) ^? implementation;
@property (nonatomic) NSString typeEncoding;
- (SEL)selector;
- (id)implementation;
- (void).cxx_destruct;
- (id)name;
- (id)typeEncoding;
- (id)initWithMethod:;
- (id)initWithName:implementation:typeEncoding:;
- (id)methodBySettingName:;
- (id)performOnObject:;
+ (id)methodWithName:implementation:typeEncoding:;
@end
