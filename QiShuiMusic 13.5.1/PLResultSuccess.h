@interface PLResultSuccess : PLResult
- (BOOL)isSuccess;
- (id)result;
- (id)initWithResult:;
- (id)resultWithError:;
- (BOOL)isFailure;
- (id)error;
- (void).cxx_destruct;
- (id)description;
@end
