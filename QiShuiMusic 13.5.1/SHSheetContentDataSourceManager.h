@interface SHSheetContentDataSourceManager : NSObject
@property (nonatomic) SHSheetContentDataSource dataSource;
@property (nonatomic) SHSheetContentDataSourceState currentState;
@property (nonatomic) NSMutableSet suggestLessIdentifiers;
@property (nonatomic) NSArray applicationActivities;
@property (nonatomic) NSArray heroActionActivityTypes;
@property (nonatomic) <SHSheetContentDataSourceManagerDelegate> delegate;
- (void)setCurrentState:;
- (void)setDataSource:;
- (id)currentState;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)applicationActivities;
- (id)heroActionActivityTypes;
- (id)initWithApplicationActivities:heroActionActivityTypes:;
- (id)_uniqueIdentifierForSectionIdentifier:;
- (id)_updateCurrentStateWithChangeRequest:;
- (void)updateWithChangeRequest:;
- (void)suggestLessPeopleProxyForIdentifier:;
- (id)suggestLessIdentifiers;
- (void)setSuggestLessIdentifiers:;
+ (id)contentCustomViewUniqueIdentifier;
@end
