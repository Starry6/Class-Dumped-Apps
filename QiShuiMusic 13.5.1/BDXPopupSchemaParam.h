@interface BDXPopupSchemaParam : BDXSchemaParam
@property (nonatomic) BDXPopupModel popupModel;
@property (nonatomic) BOOL adaptAppTheme;
- (BOOL)adaptAppTheme;
- (void)setAdaptAppTheme:;
- (void)updateWithSchemaData:;
- (void).cxx_destruct;
- (id)popupModel;
- (void)setPopupModel:;
+ (id)paramWithSchemaData:;
@end
