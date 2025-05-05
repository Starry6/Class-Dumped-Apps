@interface IESECPrivacyVisitResult : NSObject
@property (nonatomic) BOOL success;
@property (nonatomic) NSError anyError;
@property (nonatomic) NSError appleError;
@property (nonatomic) NSError policyError;
- (void)setPolicyError:;
- (id)anyError;
- (id)appleError;
- (id)policyError;
- (void)setAppleError:;
- (BOOL)success;
- (void).cxx_destruct;
@end
