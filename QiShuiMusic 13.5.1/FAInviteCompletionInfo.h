@interface FAInviteCompletionInfo : NSObject
@property (nonatomic) Q transportType;
@property (nonatomic) NSArray recipients;
@property (nonatomic) Q status;
- (void)setStatus:;
- (void)setTransportType:;
- (id)recipients;
- (void)setRecipients:;
- (unsigned long long)transportType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)serverReadableDictionary;
- (id)_transportStringValue;
- (unsigned long long)transportTypeFrom:;
- (id)_completionStatusStringValue;
- (unsigned long long)completionTypeFrom:;
+ (BOOL)supportsSecureCoding;
@end
