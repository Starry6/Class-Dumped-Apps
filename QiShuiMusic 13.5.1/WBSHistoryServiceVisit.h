@interface WBSHistoryServiceVisit : WBSHistoryServiceObject
@property (nonatomic) q itemID;
@property (nonatomic) NSString title;
@property (nonatomic) double visitTime;
@property (nonatomic) BOOL loadSuccessful;
@property (nonatomic) BOOL httpNonGet;
@property (nonatomic) BOOL synthesized;
@property (nonatomic) q redirectSource;
@property (nonatomic) q redirectDestination;
@property (nonatomic) q origin;
@property (nonatomic) q generation;
@property (nonatomic) q attributes;
@property (nonatomic) NSInteger score;
- (long long)redirectDestination;
- (void)setOrigin:;
- (int)score;
- (long long)itemID;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)setRedirectDestination:;
- (long long)origin;
- (void)setAttributes:;
- (long long)attributes;
- (void)encodeWithCoder:;
- (double)visitTime;
- (id)title;
- (void)setScore:;
- (void)setGeneration:;
- (void).cxx_destruct;
- (long long)generation;
- (long long)redirectSource;
- (void)setRedirectSource:;
- (id)initWithSQLRow:;
- (BOOL)loadSuccessful;
- (BOOL)httpNonGet;
- (id)initWithVisit:;
- (id)_initWithDatabaseID:serviceVisit:;
- (id)visitWithUpdatedID:updatedItemID:;
- (BOOL)synthesized;
+ (BOOL)supportsSecureCoding;
@end
