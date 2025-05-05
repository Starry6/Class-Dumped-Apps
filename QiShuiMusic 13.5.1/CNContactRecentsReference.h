@interface CNContactRecentsReference : NSObject
@property (nonatomic) NSNumber recentContactID;
@property (nonatomic) NSString domain;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)domain;
- (id)initWithRecentContactID:domain:;
- (id)recentContactID;
+ (BOOL)supportsSecureCoding;
@end
