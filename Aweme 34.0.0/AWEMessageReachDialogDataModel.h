@interface AWEMessageReachDialogDataModel : MTLModel
@property (nonatomic) NSString businessId;
@property (nonatomic) NSDictionary businessData;
@property (nonatomic) q showTimeout;
@property (nonatomic) AWEMessageReachNativeDialogDataModel nativeDataModel;
@property (nonatomic) AWEMessageReachLynxDialogDataModel lynxDataModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)businessData;
- (void)setBusinessData:;
- (id)nativeDataModel;
- (id)lynxDataModel;
- (BOOL)isEqualDataModel:;
- (long long)showTimeout;
- (void)setLynxDataModel:;
- (void)setNativeDataModel:;
- (void)setShowTimeout:;
- (BOOL)isValidWithError:;
- (id)businessId;
- (void).cxx_destruct;
- (void)setBusinessId:;
+ (id)nativeDataModelJSONTransformer;
+ (id)lynxDataModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
