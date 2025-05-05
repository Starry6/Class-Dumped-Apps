@interface IESECHTTPTaskWrapper : NSObject
@property (nonatomic) TTHttpTask task;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (id)task;
- (void)suspend;
- (void)resume;
- (void)setTask:;
- (void).cxx_destruct;
+ (id)wrapper:;
@end
