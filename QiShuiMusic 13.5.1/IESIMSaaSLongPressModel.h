@interface IESIMSaaSLongPressModel : NSObject
@property (nonatomic) NSArray actionModels;
@property (nonatomic) @? longPressBlock;
- (id)actionModels;
- (id)longPressBlock;
- (void)setActionModels:;
- (void)setLongPressBlock:;
- (void).cxx_destruct;
@end
