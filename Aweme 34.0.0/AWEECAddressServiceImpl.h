@interface AWEECAddressServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)addEcAddressDataInSchema:;
+ (id)getAddressUpdateDialogConfig;
+ (id)getAddressWithBtmHost:curPageBtm:addressType:;
+ (void)setAddress:sourceType:isSession:completion:;
+ (void)showAddressUpdateDialog:;
+ (void)updateAddress:action:completion:;
@end
