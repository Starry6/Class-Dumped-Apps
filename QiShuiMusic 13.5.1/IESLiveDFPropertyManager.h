@interface IESLiveDFPropertyManager : NSObject
@property (nonatomic) NSMutableDictionary properties;
- (void)configLayerProperties;
- (id)hanlderWithType:;
- (void)registerRead:bezierUpdate:compatible:forType:;
- (void)registerRead:update:compatible:forType:;
- (id)valueCompatibleBlockWithObjectType:;
- (id)init;
- (void)setProperties:;
- (id)properties;
- (void).cxx_destruct;
+ (id)hanlderWithType:;
+ (id)shared;
@end
