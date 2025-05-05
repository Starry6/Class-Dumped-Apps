@interface CJPayAccountInsuranceEntrance : JSONModel
@property (nonatomic) BOOL showInsuranceEntrance;
- (void)setShowInsuranceEntrance:;
- (BOOL)showInsuranceEntrance;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
