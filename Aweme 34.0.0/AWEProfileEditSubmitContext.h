@interface AWEProfileEditSubmitContext : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) BOOL ifChangeUniqueID;
@property (nonatomic) BOOL ifChangeImage;
@property (nonatomic) BOOL showsSuccessToast;
@property (nonatomic) BOOL allowUserInteractionWhenLoading;
@property (nonatomic) BOOL callCompletionGuarantee;
- (void)setIfChangeImage:;
- (void)setShowsSuccessToast:;
- (void)setCallCompletionGuarantee:;
- (void)setAllowUserInteractionWhenLoading:;
- (void)setIfChangeUniqueID:;
- (BOOL)callCompletionGuarantee;
- (BOOL)showsSuccessToast;
- (BOOL)ifChangeUniqueID;
- (BOOL)allowUserInteractionWhenLoading;
- (BOOL)ifChangeImage;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)contextWithBlock:;
@end
