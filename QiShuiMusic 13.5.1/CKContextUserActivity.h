@interface CKContextUserActivity : NSObject
@property (nonatomic) NSUserActivity userActivity;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSNumber numberOfOccurrences;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSDate entryDate;
- (id)bundleIdentifier;
- (id)entryDate;
- (id)numberOfOccurrences;
- (id)initWithUserActivity:;
- (id)uuid;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setNumberOfOccurrences:;
- (id)userActivity;
- (id)description;
- (void)prepareForDonationWithCompletionHandler:;
- (void)setEntryDate:;
+ (BOOL)supportsSecureCoding;
@end
