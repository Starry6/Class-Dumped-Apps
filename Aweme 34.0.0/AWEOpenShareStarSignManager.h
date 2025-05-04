@interface AWEOpenShareStarSignManager : NSObject
@property (nonatomic) NSMutableDictionary completionMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didLoadFailedWithUrl:error:;
- (void)containerWillDestory:;
- (void)startStarSignWithRespWithResp:params:completion:;
- (void)setCompletionMap:;
- (id)completionMap;
- (void)runCompletionWithShareID:result:errMsg:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareManager;
@end
