@interface PLBackgroundJobWorkerCriteriaTuple : NSObject
@property (nonatomic) PLBackgroundJobWorker worker;
@property (nonatomic) PLBackgroundJobCriteria criteria;
- (id)criteria;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithWorker:withCriteria:;
- (id)worker;
@end
