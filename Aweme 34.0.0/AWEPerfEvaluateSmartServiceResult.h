@interface AWEPerfEvaluateSmartServiceResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
@property (nonatomic) float score;
- (void)setScore:;
- (void)setError:;
- (void)setSuccess:;
- (float)score;
- (void).cxx_destruct;
- (id)error;
- (BOOL)success;
+ (id)makeSuccessResultWithScore:;
+ (id)makeFailureWithError:;
@end
