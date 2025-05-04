@interface AWEVideoInsertHelper : NSObject
@property (nonatomic) NSMutableDictionary resultDict;
- (BOOL)getSchemeVideoInsertStatus:;
- (void)markVideoInsertResult:result:;
- (id)getUniqueID:;
- (id)awemeIDFromschemePath:;
- (id)sessionIDForScheme:;
- (void).cxx_destruct;
- (id)resultDict;
- (void)setResultDict:;
+ (id)sharedInstance;
@end
