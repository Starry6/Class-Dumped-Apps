@interface DSConflictStrategy : NSObject
@property (nonatomic) NSMutableDictionary localizedTitlesByResolution;
@property (nonatomic) Q type;
@property (nonatomic) @? conflictHandler;
@property (nonatomic) NSString localizedAlertTitle;
@property (nonatomic) NSString localizedAlertMessageFormat;
- (void)validate;
- (id)init;
- (void)setType:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)setLocalizedTitle:forResolution:;
- (id)localizedTitleForResolution:;
- (id)localizedAlertMessageForSourceFileURL:;
- (id)conflictHandler;
- (void)setConflictHandler:;
- (id)localizedAlertTitle;
- (void)setLocalizedAlertTitle:;
- (id)localizedAlertMessageFormat;
- (void)setLocalizedAlertMessageFormat:;
- (id)localizedTitlesByResolution;
- (void)setLocalizedTitlesByResolution:;
@end
