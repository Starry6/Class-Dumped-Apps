@interface AWEPOISkeletonExpression : NSObject
@property (nonatomic) NSString rawData;
@property (nonatomic) AWEPOISkeletonExpressionResult result;
- (id)calculateWithViewModel:;
- (void)setResult:;
- (void)setRawData:;
- (void).cxx_destruct;
- (id)result;
- (id)rawData;
- (id)initWithRawData:;
@end
