@interface ICStoreDialogResponseHandlerConfiguration : NSObject
@property (nonatomic) BOOL allowsHandlingNonAuthenticationDialogs;
@property (nonatomic) BOOL shouldRecordLastAuthenticationDialogResponseTime;
- (id)init;
- (BOOL)allowsHandlingNonAuthenticationDialogs;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)shouldRecordLastAuthenticationDialogResponseTime;
- (void)setAllowsHandlingNonAuthenticationDialogs:;
- (void)setShouldRecordLastAuthenticationDialogResponseTime:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
