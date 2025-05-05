@interface HTSBootNodeGroup : NSObject
@property (nonatomic) NSArray syncList;
@property (nonatomic) NSArray asyncList;
@property (nonatomic) BOOL canRunned;
@property (nonatomic) BOOL isMainThread;
@property (nonatomic) I qos;
@property (nonatomic) double delayDuration;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString uniqueId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)asyncList;
- (BOOL)canRunned;
- (double)delayDuration;
- (id)initWithSyncList:asyncList:;
- (void)setAsyncList:;
- (void)setCanRunned:;
- (void)setSyncList:;
- (id)syncList;
- (unsigned int)qos;
- (BOOL)enabled;
- (BOOL)isMainThread;
- (void)run;
- (void).cxx_destruct;
@end
