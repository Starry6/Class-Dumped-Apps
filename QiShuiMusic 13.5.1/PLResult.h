@interface PLResult : NSObject
@property (nonatomic) @ result;
@property (nonatomic) NSError error;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isFailure;
- (BOOL)isSuccess;
- (id)result;
- (id)resultWithError:;
- (BOOL)isFailure;
- (id)error;
- (id)description;
- (id)initForSubclasses;
+ (id)failureWithError:;
+ (id)successWithResult:;
@end
