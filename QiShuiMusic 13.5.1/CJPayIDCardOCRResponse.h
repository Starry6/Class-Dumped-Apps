@interface CJPayIDCardOCRResponse : CJPayBaseResponse
@property (nonatomic) NSString flowNo;
@property (nonatomic) NSString idName;
@property (nonatomic) NSString idCode;
- (id)flowNo;
- (id)idCode;
- (void)setFlowNo:;
- (void)setIdCode:;
- (void).cxx_destruct;
- (id)idName;
- (void)setIdName:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
