@interface BdmsControlUtil : NSObject
@property (nonatomic) NSUserDefaults sharedPref;
@property (nonatomic) NSMutableArray regexModeList;
- (id)isUrlMatched:;
- (id)regexModeList;
- (void)setRegexModeList:;
- (void)setSharedPref:;
- (id)sharedPref;
- (void)updateRegexpModeFromConfigString:saveInSP:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
