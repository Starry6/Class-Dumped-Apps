@interface IESLiveNewDressLogger : NSObject
@property (nonatomic) BOOL invoked;
@property (nonatomic) NSInvocation invocation;
@property (nonatomic) NSError error;
@property (nonatomic) NSMutableDictionary userInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getDressResourceWithDressID:error:;
- (void)prefetchDressResourceWithDressIDs:source:;
- (void)setInvoked:;
- (id)invocation;
- (void)setInvocation:;
- (id)userInfo;
- (void)setError:;
- (id)error;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (BOOL)invoked;
@end
