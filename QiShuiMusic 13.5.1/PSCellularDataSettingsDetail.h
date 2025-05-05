@interface PSCellularDataSettingsDetail : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)setEnabled:;
+ (BOOL)deviceSupportsCellularData;
+ (id)preferencesURL;
+ (id)iconImage;
+ (BOOL)isEnabled;
@end
