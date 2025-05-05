@interface PuzzleIESPiperDelegateMethodFactory : NSObject
@property (nonatomic) NSDictionary methodNameToClassNameDic;
@property (nonatomic) NSMutableSet retrievedMethods;
- (id)toRegisterBridgeMethodWithName:;
- (id)methodNameToClassNameDic;
- (id)retrievedMethods;
- (void)setMethodNameToClassNameDic:;
- (void)setRetrievedMethods:;
- (id)init;
- (void).cxx_destruct;
@end
