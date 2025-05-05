@interface TKTokenAuthOperation : NSObject
@property (nonatomic) NSError authenticationError;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)finishWithError:;
- (void)importOperation:;
- (Class)baseClassForUI;
- (id)authenticationError;
- (void)setAuthenticationError:;
+ (BOOL)supportsSecureCoding;
@end
