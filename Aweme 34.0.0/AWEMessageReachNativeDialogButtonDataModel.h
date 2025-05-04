@interface AWEMessageReachNativeDialogButtonDataModel : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString title;
@property (nonatomic) q style;
@property (nonatomic) q countDown;
@property (nonatomic) q actionType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCountDown:;
- (BOOL)isEqualDataModel:;
- (id)schema;
- (long long)actionType;
- (void)setActionType:;
- (BOOL)isValidWithError:;
- (void)setSchema:;
- (long long)style;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
- (long long)countDown;
+ (id)JSONKeyPathsByPropertyKey;
@end
