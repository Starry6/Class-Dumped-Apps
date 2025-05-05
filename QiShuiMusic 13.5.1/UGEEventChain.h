@interface UGEEventChain : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isLazyLoad;
@property (nonatomic) UGEEvent rootEvent;
@property (nonatomic) NSMutableDictionary eventInfo;
- (id)_makeCallbackInfo:;
- (void)_setupData:;
- (id)getEventWithName:;
- (id)getFailGroupWithEvent:;
- (id)getNextWithEvent:;
- (id)getRootEvent;
- (id)getSuccessGroupWithEvent:;
- (BOOL)isLazyLoad;
- (void)setIsLazyLoad:;
- (void)setName:;
- (id)initWithInfo:;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
- (id)name;
- (id)eventInfo;
- (void)setEventInfo:;
- (id)rootEvent;
- (void)setRootEvent:;
@end
