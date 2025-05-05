@interface PKTool : NSObject
@property (nonatomic) PKToolConfiguration _configuration;
@property (nonatomic) PKInk ink;
- (unsigned long long)hash;
- (id)_configuration;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)ink;
- (id)_initWithInk:;
- (id)_initWithInk:configuration:;
+ (BOOL)_inkIsInkingTool:;
+ (id)_toolWithInk:;
+ (id)_toolWithInk:configuration:;
@end
