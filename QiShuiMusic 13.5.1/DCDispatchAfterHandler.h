@interface DCDispatchAfterHandler : NSObject
@property (nonatomic) NSMutableDictionary identifierBlockMap;
- (id)init;
- (void).cxx_destruct;
- (void)cancelAll;
- (void)dispatchAfter:stringIdentifier:withBlock:;
- (void)cancelBlocksWithStringIdentifier:;
- (id)identifierForStringIdentifier:;
- (id)identifierBlockMap;
- (void)setIdentifierBlockMap:;
+ (id)appLifeCycleHandler;
@end
