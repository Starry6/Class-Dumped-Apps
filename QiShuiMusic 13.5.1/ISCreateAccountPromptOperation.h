@interface ISCreateAccountPromptOperation : ISOperation
@property (nonatomic) q responseType;
@property (nonatomic) NSString reason;
- (id)init;
- (id)initWithReason:;
- (id)reason;
- (void)setReason:;
- (void)run;
- (void).cxx_destruct;
- (long long)responseType;
- (void)setResponseType:;
- (id)_newCreateAccountDialog;
- (long long)_mapCorrectSelectedButtonWithDialog:;
- (BOOL)_hasActiveICloudAccount;
@end
