@interface AWEPayLoadingAttributeModel : JSONModel
@property (nonatomic) BOOL coldLaunchStyle;
- (void)setColdLaunchStyle:;
- (BOOL)coldLaunchStyle;
+ (BOOL)propertyIsOptional:;
@end
