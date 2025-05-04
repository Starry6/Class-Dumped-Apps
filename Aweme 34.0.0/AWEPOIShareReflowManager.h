@interface AWEPOIShareReflowManager : HTSService
@property (nonatomic) NSMutableDictionary shareReflowDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetchShareReflowParamsIn:;
- (void)addShareReflowWithParams:scene:;
- (void)removeShareReflowParamsWithScene:;
- (void)setShareReflowDict:;
- (id)shareReflowDict;
- (id)init;
- (void).cxx_destruct;
@end
