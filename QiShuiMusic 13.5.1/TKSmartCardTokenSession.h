@interface TKSmartCardTokenSession : TKTokenSession
@property (nonatomic) TKSmartCard smartCard;
- (id)initWithToken:;
- (void).cxx_destruct;
- (id)name;
- (void)endRequest;
- (id)smartCard;
- (void)beginRequest;
@end
