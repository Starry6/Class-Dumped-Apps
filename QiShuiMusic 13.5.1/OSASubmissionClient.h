@interface OSASubmissionClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (BOOL)submit;
- (void).cxx_destruct;
- (id)initWithErrorHandler:;
- (void)submitWithOptions:resultsCallback:;
- (BOOL)submitWithOptions:;
@end
