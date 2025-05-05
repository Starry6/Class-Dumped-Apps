@interface CTCATryOutState : NSObject
@property (nonatomic) BOOL tryOutOfferPending;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (BOOL)tryOutOfferPending;
- (void)setTryOutOfferPending:;
+ (BOOL)supportsSecureCoding;
@end
