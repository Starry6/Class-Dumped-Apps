@interface FMDLostModeInfo : NSObject
@property (nonatomic) Q lostModeType;
@property (nonatomic) BOOL lostModeEnabled;
@property (nonatomic) BOOL disableSlideToUnlock;
@property (nonatomic) NSString message;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) BOOL facetimeCapable;
@property (nonatomic) NSString footnoteText;
- (void)dealloc;
- (id)phoneNumber;
- (void)setMessage:;
- (void)setPhoneNumber:;
- (id)initWithCoder:;
- (unsigned long long)lostModeType;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (BOOL)lostModeEnabled;
- (void)setLostModeEnabled:;
- (void)setLostModeType:;
- (BOOL)disableSlideToUnlock;
- (void)setDisableSlideToUnlock:;
- (BOOL)facetimeCapable;
- (void)setFacetimeCapable:;
- (id)footnoteText;
- (void)setFootnoteText:;
+ (BOOL)supportsSecureCoding;
@end
