@interface IESECRelationSalesComponent : UIView
@property (nonatomic) UILabel salesLabel;
- (void)p_setupUI;
- (id)salesLabel;
- (void)setSalesLabel:;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)sales;
+ (double)salesWidthWithModel:;
+ (id)salesWithHeight:padding:;
+ (id)salesWithSalesWidth:;
+ (id)salesWithSalesWidth:salesHeight:textColor:padding:;
@end
