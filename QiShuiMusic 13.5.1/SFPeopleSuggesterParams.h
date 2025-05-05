@interface SFPeopleSuggesterParams : NSObject
@property (nonatomic) NSArray contactIDs;
@property (nonatomic) I flags;
@property (nonatomic) I maxPeople;
- (id)initWithCoder:;
- (id)contactIDs;
- (void)setContactIDs:;
- (void)setMaxPeople:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned int)maxPeople;
- (void)setFlags:;
- (unsigned int)flags;
+ (BOOL)supportsSecureCoding;
@end
