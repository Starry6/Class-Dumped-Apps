@interface CTPNRRequestType : NSObject
@property (nonatomic) NSData pushToken;
@property (nonatomic) NSNumber attemptCount;
@property (nonatomic) NSArray pnrReqList;
- (id)init;
- (id)attemptCount;
- (void)setAttemptCount:;
- (id)initWithCoder:;
- (id)pushToken;
- (void)setPushToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToCTPNRRequestType:;
- (id)pnrReqList;
- (void)setPnrReqList:;
+ (BOOL)supportsSecureCoding;
@end
