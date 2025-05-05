@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration
@property (nonatomic) NSArray portTypes;
- (void)dealloc;
- (id)portTypes;
- (unsigned long long)outputIndexForPortType:;
+ (id)configurationWithPortTypes:;
@end
