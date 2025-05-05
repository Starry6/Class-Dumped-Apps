@interface IDSLocalDeliverySocketOpenedMetric : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) BOOL isToDefaultPairedDevice;
@property (nonatomic) Q openError;
@property (nonatomic) Q socketError;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)service;
- (void).cxx_destruct;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithService:isToDefaultPairedDevice:openError:socketError:;
- (BOOL)isToDefaultPairedDevice;
- (unsigned long long)openError;
- (unsigned long long)socketError;
@end
