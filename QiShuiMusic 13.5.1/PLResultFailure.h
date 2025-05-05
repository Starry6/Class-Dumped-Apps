@interface PLResultFailure : PLResult
- (BOOL)isSuccess;
- (id)result;
- (id)initWithError:;
- (id)resultWithError:;
- (BOOL)isFailure;
- (id)error;
- (void).cxx_destruct;
- (id)description;
@end
