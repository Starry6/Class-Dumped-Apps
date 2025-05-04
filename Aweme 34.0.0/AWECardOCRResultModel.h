@interface AWECardOCRResultModel : NSObject
@property (nonatomic) Q status;
@property (nonatomic) Q mode;
@property (nonatomic) NSString result;
- (id)initWithStatus:mode:result:;
- (void)setResult:;
- (id)initWithStatus:;
- (void)setStatus:;
- (void)setMode:;
- (unsigned long long)mode;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)result;
@end
