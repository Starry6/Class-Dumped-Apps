@interface AWEEcomSearchVirtualWordStore : NSObject
@property (nonatomic) NSString currentUid;
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSMutableDictionary virtualWords;
- (void)saveEcomVirtualWords:;
- (id)getEcomVirtualWordsWithType:;
- (id)currentUid;
- (void)setCurrentUid:;
- (id)virtualWords;
- (void)setVirtualWords:;
- (void)setSessionId:;
- (id)sessionId;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
