@interface AMFIPathValidator_ios : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) NSError error;
@property (nonatomic) I signerType;
@property (nonatomic) BOOL areEntitlementsValidated;
@property (nonatomic) NSData profileData;
- (id)initWithURL:;
- (id)error;
- (BOOL)validateWithError:;
- (id)profileData;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithURL:withFlags:;
- (id)initWithURL:withFileOffset:;
- (id)initWithURL:withFileOffset:withFlags:;
- (id)initWithURL:withFileOffsetAsNumber:withFlags:;
- (BOOL)computedCdHash:;
- (BOOL)areEntitlementsValidated;
- (int)isSignerType;
- (unsigned int)signerType;
@end
