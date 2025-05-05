@interface CUIPSDLayoutMetricsChannel : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} edgeInsets;
@property (nonatomic) NSString name;
- (void)setEdgeInsets:;
- (void)dealloc;
- (void)setName:;
- (id)edgeInsets;
- (id)initWithEdgeInsets:;
- (id)name;
- (void)sanitizeEdgeInsets;
@end
