@interface CJPayAlertUtil : NSObject
+ (id)customDoubleAlertWithTitle:content:leftButtonDesc:rightButtonDesc:leftActionBlock:rightActioBlock:useVC:;
+ (id)customSingleAlertWithTitle:content:buttonDesc:actionBlock:useVC:;
+ (id)doubleAlertWithTitle:content:leftButtonDesc:rightButtonDesc:leftActionBlock:rightActioBlock:cancelPosition:useVC:;
+ (id)doubleAlertWithTitle:content:leftButtonDesc:rightButtonDesc:leftActionBlock:rightActioBlock:styleWithMessage:useVC:;
+ (id)doubleAlertWithTitle:content:leftButtonDesc:rightButtonDesc:leftActionBlock:rightActioBlock:useVC:;
+ (void)p_presentCustomAlertVC:fromVC:;
+ (id)singleAlertWithTitle:content:buttonDesc:actionBlock:styleWithMessage:useVC:;
+ (id)singleAlertWithTitle:content:buttonDesc:actionBlock:useVC:;
@end
