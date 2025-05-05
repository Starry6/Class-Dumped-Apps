@interface PLDescriptionBuilder : NSObject
@property (nonatomic) NSString separator;
@property (nonatomic) q style;
@property (nonatomic) q indent;
- (void)setSeparator:;
- (void)appendName:doubleValue:;
- (id)build;
- (void)appendName:boolValue:;
- (void)appendName:integerValue:;
- (void)appendName:object:;
- (void).cxx_destruct;
- (long long)style;
- (id)separator;
- (void)appendName:typeCode:value:;
- (void)appendName:unsignedIntegerValue:;
- (id)initWithObject:style:indent:;
- (long long)indent;
- (void)appendName:floatValue:;
- (void)appendName:cgSize:;
+ (id)descriptionBuilderWithObject:;
+ (id)prettyMultiLineDescriptionBuilderWithObject:indent:;
+ (id)plainDescriptionBuilder;
+ (id)plainMultiLineDescriptionBuilder;
@end
