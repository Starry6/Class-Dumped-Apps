@interface WFDialogResponse : NSObject
@property (nonatomic) BOOL cancelled;
@property (nonatomic) q responseCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isCancelled;
- (id)initWithBSXPCCoder:;
- (long long)responseCode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (id)initWithCancelled:;
- (id)initWithResponseCode:;
- (BOOL)shouldDismissDialogInTransientMode;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
