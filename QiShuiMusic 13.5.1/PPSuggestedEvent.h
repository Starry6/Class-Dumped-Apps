@interface PPSuggestedEvent : PPScoredEvent
@property (nonatomic) C category;
@property (nonatomic) NSString eventIdentifier;
- (id)initWithCoder:;
- (id)eventIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned char)category;
- (id)initWithPPEvent:;
- (id)initWithPPEvent:score:;
+ (BOOL)supportsSecureCoding;
@end
