@interface TIRecentInputs : TILexicon
@property (nonatomic) BOOL needsSync;
@property (nonatomic) NSString filePath;
- (id)filePath;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)lexiconWithAdditionalEntry:maximumSize:;
- (id)lexiconByRemovingEntry:;
- (void)storeIfNecessary;
- (BOOL)needsSync;
- (void)setNeedsSync:;
+ (void)clearRecentInputForIdentifier:;
+ (void)removeInput:forSystemIdentifier:;
+ (id)recentInputForIdentifier:;
+ (void)requestLexiconForRecentInputIdentifier:completionHandler:;
+ (void)requestRemovalOfLexiconForRecentInputIdentifier:;
+ (id)recentInputAtPath:;
+ (id)_lexiconPathForLocalIdentifier:;
+ (void)recentInputForIdentifier:completionHandler:;
+ (id)_sanitizeRecentInputString:;
+ (void)storeInput:forLocalIdentifier:;
+ (void)storeInput:forSystemIdentifier:atPath:;
+ (void)storeInput:forSystemIdentifier:;
+ (BOOL)validateInputFormat:forIdentifier:;
+ (BOOL)identifierIsSystemIdentifier:;
@end
