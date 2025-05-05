@interface CalDatabaseInitializationConfiguration : NSObject
@property (nonatomic) NSInteger options;
@property (nonatomic) NSURL directoryURL;
@property (nonatomic) <CalCalendarDataContainerProvider> dataContainerProvider;
@property (nonatomic) CDBPreferences preferences;
- (void)setOptions:;
- (void)setPreferences:;
- (id)preferences;
- (id)redactedDescription;
- (id)dataContainerProvider;
- (int)options;
- (void).cxx_destruct;
- (id)description;
- (void)setDataContainerProvider:;
- (id)initWithDirectoryURL:;
- (id)directoryURL;
- (void)setDirectoryURL:;
@end
