@interface IESLatchLoaderAPIEvent : NSObject
@property (nonatomic) NSString apiName;
@property (nonatomic) Q cacheStatus;
@property (nonatomic) double startTime;
@property (nonatomic) NSError error;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCacheStatus:;
- (unsigned long long)cacheStatus;
- (id)init;
- (void)setStartTime:;
- (void)setError:;
- (id)error;
- (double)startTime;
- (void).cxx_destruct;
- (void)setApiName:;
- (id)apiName;
@end
