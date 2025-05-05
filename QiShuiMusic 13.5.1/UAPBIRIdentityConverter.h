@interface UAPBIRIdentityConverter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)typeString;
- (id)convertPlatformDataToIR:;
- (id)convertIRDataToPlatform:;
+ (void)registerConverter;
@end
