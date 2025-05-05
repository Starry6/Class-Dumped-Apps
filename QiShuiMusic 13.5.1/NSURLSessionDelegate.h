@interface NSURLSessionDelegate : NSObject
@property (nonatomic) NSString validationHostname;
@property (nonatomic) BOOL enableExtendedValidation;
@property (nonatomic) BOOL ignoreInvalidCerts;
@property (nonatomic) NSString leafOID;
@property (nonatomic) BOOL revocationFailClosed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)ignoreInvalidCerts;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (id)validationHostname;
- (void)setIgnoreInvalidCerts:;
- (BOOL)revocationFailClosed;
- (void)setValidationHostname:;
- (void).cxx_destruct;
- (id)leafOID;
- (BOOL)enableExtendedValidation;
- (void)setRevocationFailClosed:;
- (void)setLeafOID:;
- (void)setEnableExtendedValidation:;
@end
