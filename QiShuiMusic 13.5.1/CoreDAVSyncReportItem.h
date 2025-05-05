@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem
@property (nonatomic) NSString syncToken;
- (id)syncToken;
- (void).cxx_destruct;
- (id)description;
- (void)_setSyncTokenItem:;
+ (id)copyParseRules;
@end
