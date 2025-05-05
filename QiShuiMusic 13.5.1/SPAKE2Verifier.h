@interface SPAKE2Verifier : NSObject
@property (nonatomic) SPAKE2Common common;
- (id)common;
- (id)decryptMessage:error:;
- (void)setCommon:;
- (void).cxx_destruct;
- (BOOL)isVerified;
- (id)getMsg1WithError:;
- (BOOL)processMsg1:error:;
- (id)getMsg2WithError:;
- (BOOL)processMsg2:error:;
- (id)getKey;
- (id)encryptMessage:error:;
- (id)initWithSalt:code:error:;
- (id)getCode;
+ (id)generateCodeWithError:;
@end
