@interface AWEFeedBSClientPortraitParser : NSObject
@property (nonatomic) NSMutableDictionary result;
@property (nonatomic) NSMutableArray parserList;
- (id)setupParserList;
- (id)parserList;
- (void)setParserList:;
- (id)init;
- (void)setResult:;
- (id)parse;
- (void)setup;
- (void).cxx_destruct;
- (void)updateResult;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)result;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
