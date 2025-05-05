@interface BDREInstructionCacheManager : NSObject
@property (nonatomic) NSDictionary commandMap;
@property (nonatomic) NSString signature;
@property (nonatomic) NSString kvStoreID;
- (id)findCommandsForExpr:;
- (id)kvStoreID;
- (void)loadCommandMap;
- (void)updateCommandMapWithInstructionJsonMap:;
- (void)updateInstructionJsonMap:signature:;
- (void)setSignature:;
- (id)init;
- (id)signature;
- (void).cxx_destruct;
- (id)commandMap;
- (void)setCommandMap:;
+ (id)sharedManager;
@end
