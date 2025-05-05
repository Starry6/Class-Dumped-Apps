@interface IESECHTTPTaskDefaultWrapper : NSObject
@property (nonatomic) TTHttpTask rawTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rawTask;
- (void)setRawTask:;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
+ (id)taskWrapperWithHttpTask:;
@end
