@interface VSAccountsArchive : NSObject
@property (nonatomic) NSArray accounts;
@property (nonatomic) VSAccountChannels channels;
- (id)accounts;
- (id)channels;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setChannels:;
- (void)setAccounts:;
+ (BOOL)supportsSecureCoding;
@end
