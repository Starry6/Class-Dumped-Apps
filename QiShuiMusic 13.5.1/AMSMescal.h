@interface AMSMescal : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)verifyTask:data:type:bagContract:error:;
+ (id)_signedActionDataFromRequest:policy:;
+ (id)_matchSignedActions:withURL:error:;
+ (BOOL)verifyTask:data:type:bag:error:;
+ (id)createBagForSubProfile;
+ (BOOL)primeTheConnectionWithContract:error:;
+ (id)_DAAPActionsForURLBagActions:;
+ (id)signatureUsingRequest:type:bag:error:;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)signatureFromData:type:bagContract:error:;
+ (BOOL)shouldReprimeConnectionWithResult:;
+ (id)signatureUsingRequest:type:bagContract:error:;
+ (BOOL)primeTheConnectionWithBag:error:;
+ (BOOL)verifyTask:data:type:bagContract:logKey:error:;
+ (id)bagKeySet;
+ (id)signatureUsingRequest:type:bagContract:logKey:error:;
+ (id)signatureFromData:type:bagContract:logKey:error:;
+ (BOOL)primeTheConnectionWithContract:logKey:error:;
+ (id)signatureFromData:type:bag:error:;
+ (BOOL)_matchSignSapURL:bagDictionary:error:;
@end
