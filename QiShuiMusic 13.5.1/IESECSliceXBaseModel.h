@interface IESECSliceXBaseModel : NSObject
@property (nonatomic) NSDictionary exprMap;
@property (nonatomic) IESECSliceXTemplateInfo context;
- (id)exprMap;
- (void)precompileAllExpressionWithExprMap:context:;
- (void)setExprMap:;
- (void)updateModelWithData:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (id)copyWithZone:;
+ (id)modelWithDict:context:;
@end
