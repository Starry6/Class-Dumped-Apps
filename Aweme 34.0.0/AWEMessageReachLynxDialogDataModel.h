@interface AWEMessageReachLynxDialogDataModel : MTLModel
@property (nonatomic) NSString lynxUrl;
@property (nonatomic) NSString lynxControllerUrl;
@property (nonatomic) q lynxControllerTimeOut;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxUrl;
- (void)setLynxUrl:;
- (BOOL)isEqualDataModel:;
- (id)lynxControllerUrl;
- (long long)lynxControllerTimeOut;
- (void)setLynxControllerUrl:;
- (void)setLynxControllerTimeOut:;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
