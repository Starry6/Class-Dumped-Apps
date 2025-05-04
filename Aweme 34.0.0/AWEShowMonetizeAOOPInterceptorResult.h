@interface AWEShowMonetizeAOOPInterceptorResult : NSObject
@property (nonatomic) BOOL shouldIntercept;
@property (nonatomic) NSString reason;
@property (nonatomic) BOOL shouldReport;
- (BOOL)isShouldIntercept;
- (BOOL)isShouldReport;
- (id)initWithShouldIntercept:reason:;
- (id)initWithShouldIntercept:reason:shouldReport:;
- (id)description;
- (void).cxx_destruct;
- (id)reason;
@end
