@interface AWEECBcmNetworkCheckPointResult : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSObject value;
@property (nonatomic) BOOL checkResult;
- (BOOL)checkResult;
- (void)setCheckResult:;
- (id)initWithName:value:checkResult:;
- (id)value;
- (void)setValue:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
@end
