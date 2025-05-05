@interface CUPairingStream : NSObject
@property (nonatomic) Q authTagLength;
@property (nonatomic) NSString name;
- (void)_cleanup;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)authTagLength;
- (void)setAuthTagLength:;
- (BOOL)prepareWithName:isClient:pskData:error:;
- (id)encryptData:aadData:error:;
- (id)encryptData:aadBytes:aadLength:error:;
- (id)decryptData:aadData:error:;
- (id)decryptData:aadBytes:aadLength:error:;
- (BOOL)encryptInputBytes:inputLength:inputAADBytes:inputAADLength:outputBytes:outputAuthTagBytes:outputAuthTagLength:error:;
- (BOOL)decryptInputBytes:inputLength:inputAADBytes:inputAADLength:inputAuthTagPtr:inputAuthTagLength:outputBytes:error:;
@end
