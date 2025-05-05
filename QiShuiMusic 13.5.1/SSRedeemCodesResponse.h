@interface SSRedeemCodesResponse : NSObject
@property (nonatomic) NSArray codeResponses;
@property (nonatomic) NSArray failedCodes;
@property (nonatomic) NSArray redeemedCodes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)errorForCode:;
- (id)codeResponses;
- (id)dictionaryForCode:;
- (id)failedCodes;
- (id)redeemedCodes;
- (id)responseDictionaryForCode:;
- (void)setCodeResponses:;
- (void)setFailedCodes:;
- (void)setRedeemedCodes:;
@end
