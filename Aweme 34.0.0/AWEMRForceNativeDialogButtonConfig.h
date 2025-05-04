@interface AWEMRForceNativeDialogButtonConfig : NSObject
@property (nonatomic) NSString schema;
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) q countDown;
@property (nonatomic) q actionType;
- (void)setCountDown:;
- (id)schema;
- (long long)actionType;
- (void)setActionType:;
- (BOOL)isValidWithError:;
- (void)setSchema:;
- (long long)style;
- (id)description;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)copyWithZone:;
- (void)setStyle:;
- (long long)countDown;
@end
