@interface WBSWebExtensionDeclarativeNetRequestRuleset : NSObject
@property (nonatomic) NSString rulesetID;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSString jsonPath;
- (BOOL)enabled;
- (id)initWithDictionary:error:;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)description;
- (id)rulesetID;
- (id)jsonPath;
@end
