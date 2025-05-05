@interface WBSParsecPunchout : WBSParsecModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString punchoutLabel;
@property (nonatomic) NSURL punchoutURL;
@property (nonatomic) NSURL installURL;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)name;
- (id)bundleID;
- (id)punchoutLabel;
- (id)punchoutURL;
- (id)installURL;
+ (id)schema;
@end
