@interface CPLResetReason : NSObject
@property (nonatomic) @ asPlist;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSDate date;
@property (nonatomic) NSString reason;
@property (nonatomic) BOOL tentative;
- (id)initWithPlist:;
- (void)setTentative:;
- (id)uuid;
- (id)reason;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)tentative;
- (id)initWithDate:reason:;
- (id)asPlist;
- (id)reasonDescriptionWithNow:;
+ (BOOL)supportsSecureCoding;
@end
