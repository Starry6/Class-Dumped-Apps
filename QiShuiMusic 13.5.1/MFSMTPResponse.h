@interface MFSMTPResponse : NSObject
@property (nonatomic) Q status;
@property (nonatomic) I statusClass;
@property (nonatomic) I statusSubject;
@property (nonatomic) I statusDetail;
@property (nonatomic) NSString statusString;
@property (nonatomic) NSArray continuationResponses;
- (void)setStatus:;
- (long long)failureReason;
- (id)statusString;
- (id)initWithStatus:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)status;
- (id)copyWithZone:;
- (id)lastResponseLine;
- (void)_updateEnhancedStatusCodesFromLastResponse;
- (void)setLastResponseLine:;
- (id)errorMessageWithAddress:defaultMessage:;
- (unsigned int)statusClass;
- (unsigned int)statusSubject;
- (unsigned int)statusDetail;
- (id)continuationResponses;
- (void)setContinuationResponses:;
@end
