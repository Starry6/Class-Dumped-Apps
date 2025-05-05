@interface AAInviteCompletionInfo : NSObject
@property (nonatomic) Q transportType;
@property (nonatomic) NSArray recipients;
@property (nonatomic) Q status;
- (void)setStatus:;
- (void)setTransportType:;
- (id)recipients;
- (void)setRecipients:;
- (unsigned long long)transportType;
- (void).cxx_destruct;
- (unsigned long long)status;
@end
