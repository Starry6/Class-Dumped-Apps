@interface PrivateKey : NSObject
@property (nonatomic) ^{__SecKey=} reference;
@property (nonatomic) NSData originalData;
- (id)base64StringAndReturnError:;
- (id)dataAndReturnError:;
- (id)initWithBase64Encoded:error:;
- (id)initWithDerNamed:in:error:;
- (id)initWithPemEncoded:error:;
- (id)initWithPemNamed:in:error:;
- (id)initWithReference:error:;
- (id)pemStringAndReturnError:;
- (id)initWithData:error:;
- (id)reference;
- (id)init;
- (void).cxx_destruct;
- (id)originalData;
@end
